#include <iostream>

using std::string;

double square(double length);
double cube(double length);
string concatStrings(string string1, string string2);

int main()
{
    double length = 5.0;
    double area = square(length);
    double volumn = cube(length);

    std::cout << area << '\n';
    std::cout << volumn << '\n';

    string firstName = "Chanokchon";
    string lastName = "Wongjampa";
    string fullName = concatStrings(firstName, lastName);
    std::cout << fullName << '\n';
    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

string concatStrings(string string1, string string2)
{
    return string1 + " " + string2;
}