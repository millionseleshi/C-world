#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Sinle line comment

    /*multi line comment
     \n = new line
     \t = tab
     */

    printf("\"Like this code\"  David Joe");

    // Variable
    int age = 5;

    float gpa = 3.05;       // 6-7 digit %f
    double d = 3.144654735; // 15-16 digits %lf

    char grade = 'A';      // -128 to +127
    unsigned char g = 233; //%c 0 to 255

    char name[] = "Marcus";

    bool e = true;

    printf("you are %d age years old\n", age);
    printf("Hello %s\n", name);
    printf("your grade is %c\n", grade);

    /*
    %c = character
    %s = stirng
    %f = float
    %lf = double
    %d = intiger

    %-= left align
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: %.2f\n", item1);
    printf("Item 1: %.2f\n", item2);
    printf("Item 1: %.2f\n", item3);

    const float pi = 3.14519;

    printf("%f", pi);

    int x = 30;
    x + 1; //agumented assiigment operator

    printf("\n The value of x %d", x);
 
    return 0;
}