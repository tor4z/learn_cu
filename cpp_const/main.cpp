#include <algorithm>
#include <iostream>


int* f(int n)
{
    int* array = new int[n];
    std::fill_n(array, n, 1);
    return array;
}


// const int* f(int n)
// {
//     int* array = new int[n];
//     std::fill_n(array, n, 1);
//     return array;
// }


int main()
{
    std::cout << "c++ const" << std::endl;
    int* a = f(3);
    *a = 2;
    for (int i = 0; i < 3; ++i) {
        std::cout << *(a+i) << " ";
    }
    std::cout << std::endl;
    return 0;
}
