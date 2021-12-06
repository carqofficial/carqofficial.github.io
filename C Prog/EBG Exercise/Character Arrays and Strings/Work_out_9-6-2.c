#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    char NAME[] = "CProgramming";
    int i, j;
    for (i = 0; i < strlen(NAME); i++)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%c", NAME[j]);
        }
        printf("|");
    }
    for (i = (strlen(NAME) - 1); i >= 0; i--)
    {
        printf("\n");
        for (j = 0; j <= i; j++)
        {
            printf("%c", NAME[j]);
        }
        printf("|");
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}