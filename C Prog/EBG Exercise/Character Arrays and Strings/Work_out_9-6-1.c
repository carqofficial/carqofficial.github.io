#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    char NAME[] = "CProgramming";
    int i, j, space;
    for (i = 0; i < strlen(NAME); i++)
    {
        printf("\n");
        for (space = 0; space <= (strlen(NAME) - 1 - i + 1); space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", NAME[j]);
        }
    }
    for (i = (strlen(NAME) - 1); i >= 0; i--)
    {
        printf("\n");
        for (space = 0; space <= (strlen(NAME) - 1 - i + 1); space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", NAME[j]);
        }
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}