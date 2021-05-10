#include <algorithm>
#include <iostream>
#include <exception>


int* f(int n)
{
    int* array = new int[n];
    std::fill_n(array, n, 1);
    throw std::runtime_error("Test exception.");
    return array;
}


int main()
{
    std::cout << "c++ const" << std::endl;
    int* a;

    try {
        a = f(3);
    } catch(std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
        std::exit(1);
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << *(a+i) << " ";
    }
    std::cout << std::endl;
    return 0;
}
