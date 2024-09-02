#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("Enter the operation (+,-,*,/): \n");
    scanf("%c", &operator);

    printf("Enter the first number\n");
    scanf("%lf", &num1);

    printf("Enter the second number\n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n The result is %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n The result is %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n The result is %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n The result is %lf", result);
        break;
    default:
        printf("\n Enter a valid operation");
        break;
    }

    // && AND
    // || OR
    // ! NOT
    return 0;
}