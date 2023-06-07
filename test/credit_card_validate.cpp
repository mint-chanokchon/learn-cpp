#include <iostream>

using std::string;

int getDigit(const int number);
int sumOddDigit(const string cardNumber);
int sumEvenDigit(const string cardNumber);

int main()
{
    string cardNumber;
    int result;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is valid";
    }
    else 
    {
        std::cout << cardNumber << " is invalid";
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigit(const string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigit(const string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

/*
    Luhn Algorithm

    1. ยกกำลัง 2 ทุก ๆ ตัวเลข 2 ตัว นับจากซ้ายไปขวา
        - 6011000990139424
        - 6011 0009 9013 9424
        - 6 1  0 0  9 1  9 2
        - 12 2  0 0  18 2  18 4
        > ทำการแยกตัวเลขที่เกินหลักหน่วย ออกมาเป็นหลักหน่วย
            - 1 2 2  0 0  1 8 2  1 8 4
    2. จากนั้นทำการหาผลรวมของทั้งหมด
        - (1+2+2+0+0+1+8+2+1+8+4) = 29

    3. ทำการบวกเลขคู่ทั้งหมดจาก original card number
        -  0 1  0 9  0 3  4 4 = 21
    
    4. นำผลลัพทั้งขั้นตอนที่ 2 - 3 มาบวกกัน
        - 50

    5. นำผลลัพจากขั้นตแนที่ 4 มา % 10 ถ้าได้ 0 ก็คือถูกต้อง
        - 50 % 10 = 0;
*/
