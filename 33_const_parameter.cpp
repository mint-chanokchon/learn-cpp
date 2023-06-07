#include <iostream>

using std::string;

void printInfo(const string &name, const int &age);

int main()
{
    string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const string &name, const int &age)
{
    std::cout << name << '\n';
    std::cout << age << '\n';
}