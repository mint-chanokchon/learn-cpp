#include <iostream>

using std::string;

void swap(string &x, string &y);

int main()
{
    string x = "Kool-Aid";
    string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}