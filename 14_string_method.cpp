#include <iostream>

using std::string;

int main()
{
    string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << name.substr(1, 3);;

    return 0;
}