#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    std::string name = "Bro";

    happyBirthday(name, 21);
    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy birthday to " << name << " " << age << " year old!\n";
}