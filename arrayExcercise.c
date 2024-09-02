#include <stdio.h>

int main()
{
    double prices[] = {1.1, 3.2, 4, 7.8};
    // printf("$%.2lf", prices[0]);

    for (int i = 0; i <= sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf \n", prices[i]);
    }

    // 2d array

    int nums[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int rows = sizeof(nums) / sizeof(nums[0]);
    int col = sizeof(nums[0]) / sizeof(nums[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%.2d\n", nums[i][j]);
        }
    }

    return 0;
}