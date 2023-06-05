#include <iostream>

int myNum = 1;

void printNum();

int main()
{
    printNum();

    return 0;
}

void printNum()
{
    std::cout << myNum;
}