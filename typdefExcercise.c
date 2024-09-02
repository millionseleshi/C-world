#include <stdio.h>

// typedef char user[20];
// typedef int gpa;

typedef struct
{
    char userName[12];
    char password[20];
    int id;
} User;

int main()
{
    // user user1 = "skyler";
    // gpa user1_gpa = 2.3;
    // printf("%s \n", user1);

    User userOne = {"shine", "yufi6796", 57656};
    User usertwo = {"kim", "f7tyr46", 89777};

    printf("%s \n", userOne.userName);
    printf("%s \n", userOne.password);
    printf("%d \n", userOne.id);
    printf("\n");
    printf("%s \n", usertwo.userName);
    printf("%s \n", usertwo.password);
    printf("%d \n", usertwo.id);
    return 0;
}