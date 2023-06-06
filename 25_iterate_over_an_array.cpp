#include <iostream>

using std::string;

int main()
{
    string students[] = {"Spongebob", "Patrick", "Squidward"};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i] << '\n';
    }

    return 0;
}