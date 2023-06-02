#include <iostream>
#include <array>

void fizzbuzz(int numbers[]) 
{
    
    
    // for (int index = 0; index < count; index++)
    // { 
    //     std::cout << numbers[index] << std::endl;
    // }
} 

int main()
{
    for (int number = 1; number <= 100; number++)
    {
        if ((number % 15) == 0)
        {   
            std::cout << "Fizzbuzz" << std::endl;
        }
        else if ((number % 3) == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if ((number % 5) == 0)
        {
            std::cout << "buzz" << std::endl;
        }
        else 
        {
            std::cout << number << std::endl;
        }
    }

    return 0;
}