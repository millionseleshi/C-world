#include <stdio.h>

// Function protype

void birthday(char name[], int age);

int main()
{
    char name[] = "";
    int age;
    printf("Enter your name:\n");
    scanf("%s", &name);

    printf("Enter age: \n");
    scanf("%d", &age);

   // birthday(name); // will not compile given function protype
    return 0;
}

void birthday(char name[], int age) // function
{
    printf("Happy birthday %s\n", name);
    printf("Your are %d\n years old", age);
}