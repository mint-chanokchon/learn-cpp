#include <iostream>

using std::string;

int main()
{
    string name = "Bro";
    string *pName = &name;
    std::cout << pName << " " << *pName << '\n';

    int age = 21;
    int *pAge = &age;
    std::cout << pAge << " " << *pAge << '\n';

    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    string *pFreePizzas = freePizzas;
    pFreePizzas += 4;
    std::cout << pFreePizzas << " " << *pFreePizzas << '\n';

    return 0;
}