#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "KINGS";
    char string2[] = "lords";

    strlwr(string1);
    printf("%s", string1);

    // strlen()	computes string's length
    // strcpy()	copies a string to another
    // strcat()	concatenates(joins) two strings
    // strcmp()	compares two strings
    // strlwr()	converts string to lowercase
    // strupr()	converts string to uppercase

    return 0;
}