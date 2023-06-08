#include <iostream>

int main()
{
    int i, n;
    int *p;

    std::cout << "How much memory would you like to allocate ?: ";
    std::cin >> n;

    p = new int[n];
    if (p == NULL)
    {
        std::cout << "Error: memory could not be allocated";
    }
    else 
    {
        for (i = 0; i < n; i++)
        {   
            std::cout << "Enter p[" << i << "]";
            std::cin >> p[i];
        }
        std::cout << "You have entered: ";
        
        for (i = 0; i < n; i++)
        {
            std::cout << p[i] << ", ";
        }
        delete[] p;
    }

    return 0;
}