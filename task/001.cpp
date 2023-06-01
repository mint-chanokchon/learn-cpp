#include <iostream>

int main()
{
    int a, b, c, d, e, temp;
    int *inputs = new int[5];

    for (int i = 0; i < 5; i++)
    {
        std::cin >> inputs[i];
    }

    a = inputs[0];
    b = inputs[1];
    c = inputs[2];
    d = inputs[3];
    e = inputs[4];

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (c > d)
    {
        temp = c;
        c = d;
        d = temp;
    }

    if (a > c)
    {
        temp = b;
        b = d;
        d = temp;
        c = a;
    }

    a = e;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (c > a)
    {
        temp = b;
        b = d;
        d = temp;
        a = c;
    }

    if (a > d)
    {
        std::cout << d;
    }
    else 
    {
        std::cout << a;
    }

    return 0;
}