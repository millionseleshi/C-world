#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("****Temprature converter****\n");

    printf("Is the unit in (F) or (C) \n");
    scanf("%c", &unit);

    unit = toupper(unit);

    // from C to F
    // (temp°C × 9/5) + 32
    if (unit == 'C')
    {
        printf("Enter the temprature \n ");
        scanf("%f", &temp);
        temp = (temp * 1.8) + 32;
        printf("\n The temprature in fahrenheit is: %.1f", temp);
    }
    // from F to C
    //(temp°F − 32) × 5/9 = 0°C
    else if (unit == 'F')
    {
        printf("Enter the temprature \n ");
        scanf("%f", &temp);
        temp = (temp - 32) * 0.55;
        printf("\n The temprature in celcius is: %.1f", temp);
    }
    else
    {
        printf("\n Enter a valid unit");
    }

    return 0;
}