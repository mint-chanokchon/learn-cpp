#include <iostream>

int main()
{
    using std::string;

    string name = "Bro"; // 32 bytes
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grages[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(students) / sizeof(string) << " byte\n"; // หาขนาดของ array จาก byte

    return 0;
}