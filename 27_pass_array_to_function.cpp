#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {4.99, 1, 15.0, 75, 9.99};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0.00;

    for (int index = 0; index < size; index++)
    {
        total += prices[index];
    }

    return total;
}