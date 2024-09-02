#include <stdio.h>

// Bubble Sort
void sort_array(int num[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

void printArray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2d\n", num[i]);
    }
}

int main()
{
    int num[] = {9, 4, 1, 10, 6};

    int size = sizeof(num) / sizeof(num[0]);

    sort_array(num, size);
    printArray(num, size);

    return 0;
}