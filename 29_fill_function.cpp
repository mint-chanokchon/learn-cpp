#include <iostream>

int main()
{
    // std::string foods[10] = {
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    //     "pizza",
    // };

    // for (std::string food : foods)
    // {
    //     std::cout << food << '\n';
    // }

    const int size = 150;
    std::string names[size];
    fill(names, names + (size / 2), "pizza");
    fill(names + (size / 2), names + size, "banana");
    for (std::string name : names)
    {
        std::cout << name << '\n';
    }

    return 0;
}