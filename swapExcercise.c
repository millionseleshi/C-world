#include <stdio.h>
#include <string.h>

int main()

{
    char x[15] = "water";
    char y[15] = "milk";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x is %s\n", x);
    printf("y is %s\n", y);
    return 0;
}