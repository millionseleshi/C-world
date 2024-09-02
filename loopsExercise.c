#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("What is your name\n");
    fgets(name, 20, stdin);
    while (strlen(name) - 1 == 0)
    {
        printf("You didn't enter your name\n");
        printf("What is your name\n");
        fgets(name, 20, stdin);
    }
    printf("Your name is %s \n", name);

    return 0;
}