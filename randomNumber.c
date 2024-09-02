#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int num1=rand() % 6 +1 ;
    printf("%d",num1);
    return 0;
}