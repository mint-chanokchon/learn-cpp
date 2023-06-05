#include <iostream>

int main()
{
    int studentCount = 20;

    studentCount = studentCount + 1;
    studentCount += 1;
    studentCount++;

    studentCount = studentCount - 1;
    studentCount -= 1;
    studentCount--;

    studentCount = studentCount * 2;
    studentCount *= 2;

    studentCount = studentCount / 2;
    studentCount /= 2;

    int remainder = studentCount % 3;

    return 0;
}