#include <iostream>
#include <vector>


int main()
{
    std::vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << (*it) << std::endl;
    }

    return 0;
}
