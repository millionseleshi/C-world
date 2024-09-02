#include <stdio.h>

int main()
{
    FILE *pFile = fopen("love.txt", "r");
    char buffer[255];
    
    if (pFile != NULL)
    {
        while (fgets(buffer, 255, pFile) != NULL)
        {
            printf("%s", buffer);
        }
    }
    else
    {
        printf("File does't exist");
    }
    return 0;
}