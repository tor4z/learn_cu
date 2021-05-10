const int MAX_THREAD = 64;

__global__ void sum_cuda(double *array1,
                         double *array2,
                         double *array3,
                         int N);
