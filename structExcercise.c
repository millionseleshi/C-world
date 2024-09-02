#include <stdio.h>
#include <string.h>

struct Players
{
    char name[12];
    int score;
};

int main()
{
    struct Players player1;
    struct Players player2;

    strcpy(player1.name, "kings");
    player1.score = 20;

    strcpy(player2.name, "lords");
    player2.score = 32;

    printf("%s\n", player1.name);
    printf("%.2d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%.2d\n", player2.score);
    return 0;
}