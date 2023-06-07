#include <iostream>

using std::string;

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned!\n";
    }
    else 
    {
        std::cout << "address was assigned!\n";
    }

    return 0;
}