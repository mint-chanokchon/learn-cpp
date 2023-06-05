#include <iostream>

int main()
{
    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp < 0 || temp > 30)
    {
        std::cout << "The temperature is bad!";
    }
    else
    {
        std::cout << "The temperature is good!";
    }

    return 0;
}