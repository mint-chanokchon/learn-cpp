#include <time.h>
#include <stdio.h>
#include <iostream>

int main()
{
    srand(time(0));
    int randNum = (rand() % 5) + 1; // (ตัวเลขที่ได้จาก seed % ช่วงที่เราอยากได้) + 1 (ถ้าไม่ + 1 จะได้ 0 - 4 แต่ถ้า +1 จะได้ 1 - 5)

    switch (randNum)
    {
    case 1:
        printf("You win a bumper sticker!");
        break;
    case 2:
        printf("You win a bumper t-shirt!");
        break;
    case 3:
        printf("You win a bumper free lunch!");
        break;
    case 4:
        printf("You win a bumper card!");
        break;
    case 5:
        printf("You win a bumper concert!");
        break;
    default:
        break;
    }

    return 0;
}