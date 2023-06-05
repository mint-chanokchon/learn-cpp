#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    std::cout << std::max(x, y) << std::endl;
    std::cout << std::min(x, y) << std::endl;
    std::cout << pow(x, y) << std::endl;
    std::cout << sqrt(9) << std::endl;
    std::cout << abs(-9) << std::endl;
    std::cout << round(3.14) << std::endl;
    std::cout << ceil(3.14) << std::endl;
    std::cout << floor(3.99) << std::endl;

    return 0;
}