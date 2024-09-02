#include <stdio.h>

int main()
{
    // int age;
    // printf("How old are you?\n");
    // scanf("%d", &age);
    // printf("You are %d years old", age);

    char name[23];

    printf("What is your name \n");
    // scanf("%s", &name);
    fgets(name,23,stdin);  // include white spaces
    
    printf("Hello %s", name);
    
    return 0;
}