#include <stdio.h>

int main()
{
    int age;

    printf("\n Enter your age: ");
    scanf("%d", &age);

    if (age <= 18)
    {
        printf("Your age is less than eighteen");
    }
    else
    {
        printf("Your age is above eighteen");
    }

    //switch
    return 0;
}