#include <stdio.h>

int main()
{
    int age =26;
    int *pAge= &age;

    printf("address of age %p\n",&age);
    printf("address of age %p\n",pAge);

    printf("value of age %d\n",age);
    printf("value of at stored address %d\n",*pAge);
        return 0;
}