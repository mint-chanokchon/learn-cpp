#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "Temperature conversion" << std::endl;
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What uniy would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "enter the temperature in celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << " F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "enter the temperature in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << " C\n";
    }
    else
    {
        std::cout << "Please enter in only C or F\n";
    }

    return 0;
}