#include <iostream>

void sort(int array[], int size);

int main()
{
    int numbers[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(numbers) / sizeof(int);

    sort(numbers, size);

    for (int number : numbers)
    {
        std::cout << number << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}