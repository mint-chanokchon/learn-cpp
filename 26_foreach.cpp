#include <iostream>

using std::string;
int main()
{
    string students[] = {"Spongebob", "Patrick", "Spuidward"};
    int grades[] = {66, 72, 81, 93};

    for (string student : students)
    {
        std::cout << student << '\n';
    }

    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }

    return 0;
}