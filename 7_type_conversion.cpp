#include <iostream>

int main()
{
    double x = 3.14;

    std::cout << (int) x << std::endl;
    std::cout << (char) 100 << std::endl;

    int correct = 8;
    int questions = 100;

    // แปลง questions เป็น double เพราะว้าเมื่อ 8 / 10 = 0.8 แต่ถ้ามันเป็น int จะตัดเป็น 0 ทำให้ผลลัพธ์ไม่ถูกต้อง
    double score = correct / (double) questions * 100; // หา 8 เป็นกี่ % ของ 100
    double a = questions * (8 / 100.00); // หา 4% ของ 100 คือเท่าไหร่

    std::cout << score << std::endl;
    std::cout << a;
    return 0;
}