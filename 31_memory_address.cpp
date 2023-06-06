#include <iostream>

int main()
{
    // ข้อมูลที่ถูกเก็บอยู่ในตัวแปรพวกนี้ต้องอยู่ในที่ใดที่หนึ่งบนหน่วจความจำคอมพิวเตอร์ของเรา
    // เราสามารถหาที่อยู่นั้นได้ด้วย & (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &student << '\n';

    return 0;
}