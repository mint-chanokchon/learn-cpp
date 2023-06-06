#include <iostream>

int main()
{
    using std::string;

    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};

    std::cout << cars[0][0] << '\n';

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        for (int j = 0; j < sizeof(cars[i]) / sizeof(string); j++)
        {
            std::cout << cars[i][j] << " ";
        }

        std::cout << '\n';
    }

    return 0;
}