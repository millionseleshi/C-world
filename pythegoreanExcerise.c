#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;

    printf("*************************\n");
    printf("***pythagorean theorem***\n");
    printf("*************************\n");

    printf("Enter the first side(A) of the triangle \n");
    scanf("%lf", &A);

    printf("Enter the second side(B) of the triangle \n");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));
    printf("The hypotenuse of the triangle: %lf", C);

    return 0;
}