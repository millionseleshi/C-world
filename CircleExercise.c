#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    double area;
    double circumfrance;
    const double PI = 3.14159;

    printf("*******************************************\n");
    printf("*****Area and Circumfrance Calculator******\n");
    printf("*******************************************\n");
    printf("Enter the radius of a circle \n");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);     // PI*r*r
    circumfrance = 2 * PI * radius; // 2*PI*R

    printf("The Area is %lf\n", area);
    printf("The Circumfrance is %lf\n", circumfrance);

    return 0;
}