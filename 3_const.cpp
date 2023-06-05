#include <iostream>

int main()
{
    const double PI = 3.14159;
    double radius = 10;
    double circumferrence = 2 * PI * radius;

    std::cout << "circumferrence = " << circumferrence << " cm" << '\n';

    return 0;
}