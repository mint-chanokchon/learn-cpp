#include <iostream>
#include <time.h>

int main()
{
    // pseudo-random = ไม่ใช่การสุ่มแบบแท้จริง

    srand(time(NULL)); // ตั้งค่า seed ให้กับการสุ่ม โดย seed ควรเป็นอะไรที่คาดเดายาก

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}