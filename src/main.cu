#include <iostream>
#include "arr_add.hpp"


double sum_cpu(double *array1, double *array2, int N)
{
    double result = 0.0;
    for(int i = 0; i < N; ++i) {
        result += array1[i];
        result += array2[i];
    }
    return result;
}


double sum_gpu(double *array1, double *array2, int N)
{
    size_t size = N * sizeof(double);
    double result = 0.0;
    double *array3 = new double[N];
    double *d_array1;
    double *d_array2;
    double *d_array3;

    cudaMalloc(&d_array1, size);
    cudaMemcpy(d_array1, array1, size, cudaMemcpyHostToDevice);

    cudaMalloc(&d_array2, size);
    cudaMemcpy(d_array2, array2, size, cudaMemcpyHostToDevice);

    cudaMalloc(&d_array3, size);
    cudaMemcpy(d_array3, array3, size, cudaMemcpyHostToDevice);

    sum_cuda<<<1, MAX_THREAD>>>(d_array1, d_array2, d_array3, N);

    cudaMemcpy(array3, d_array3, size, cudaMemcpyDeviceToHost);

    for(int i = 0; i< N; ++i)
        result += array3[i];

    free(array3);
    cudaFree(d_array1);
    cudaFree(d_array2);
    cudaFree(d_array3);
    return result;
}


int main()
{
    int N = 100000001;
    double *array1 = new double[N];
    double *array2 = new double[N];

    // fill array
    for(int i = 0; i < N; ++i)
        array1[i] = (double)i;
        for(int i = 0; i < N; ++i)
        array2[i] = (double)i;

    std::cout << "Learn CUDA Programming" << std::endl;
    std::cout << "sum of array on cpu " << sum_cpu(array1, array2, N) << std::endl;
    std::cout << "sum of array on gpu " << sum_gpu(array1, array2, N) << std::endl;
}
