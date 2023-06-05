#include <iostream>
#include <time.h>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "***** number guessing game *****\n";

    do
    {
        std::cout << "Enter a guess between (1-100)";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too hiegh!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low!\n";
        }
        else 
        {
            std::cout << "CORRECT! # if tries: " << tries << '\n';
        }
    }
    while (guess != num);

    return 0;
}