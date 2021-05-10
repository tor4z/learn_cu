#include "arr_add.hpp"


__global__ void sum_cuda(double *array1,
                         double *array2,
                         double *array3,
                         int N)
{
    int i = threadIdx.x;
    for (int j = 0; j < (N / MAX_THREAD) && (i + j * MAX_THREAD) < N; ++j) {
        array3[i + j * MAX_THREAD] = 
            array1[i + j * MAX_THREAD] + array2[i + j * MAX_THREAD];
    }
}
