#include <iostream>
#include <vector>

// use typeof
typedef std::vector<std::pair<std::string, int>> pairlist_t; // long data type
typedef std::string text_t;
typedef int number_t;

// use using
using text_t2 = std::string;

int main()
{
    pairlist_t pairlist;
    text_t message1 = "Hello World";
    text_t2 message2 = "Hello World";
    number_t x = 5;

    return 0;
}