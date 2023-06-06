#include <iostream>

int main()
{
    double prices[] = { 5.00, 7.50, 9.99, 15.00 };
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}

void example1()
{
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::string cars2[3]; // ถ้าไม่มีข้อมูลอยู่ข้างใน สามารถระบุขนาดของ array ไว้ก่อนได้ เพื่อให้ complier ไปจองหน่วยความจำเอาไว้

    cars[0] = "Camero";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
}