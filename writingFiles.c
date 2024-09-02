#include <stdio.h>

int main()
{
    //w for overwriting
    // FILE *pFile = fopen("test.txt", "a"); 
    // fprintf(pFile, "This is the end\nfor all of mankind");
    // fclose(pFile);

    if(remove("test.txt")==0)
    {
        printf("The file is deleted");
    }
    else{
        printf("The file no longer exist");
    }
    return 0;
}