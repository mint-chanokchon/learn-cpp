#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    return 0;
}

float lab1(float p) {
    float k = 1;
    float t = 1;

    while (!((1 - t) >= p))
    {
        k = k + 1;        
    }

    return k;
}