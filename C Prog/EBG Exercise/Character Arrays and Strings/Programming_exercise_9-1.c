#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    char NAME[1000];
    printf("\nEnter you name : ");
    scanf(" %[^\n]%*c", NAME);
    system("cls");
    printf("Your name : %s", NAME);
    printf("\n\n------------------------------------------");
    printf("\nASCII codes of the letters of your name : ");
    printf("\n------------------------------------------");
    for (int i = 0; i < strlen(NAME); i++)
    {
        if (NAME[i] != ' ')
        {
            printf("\n%-5c --> %d", NAME[i], NAME[i]);
        }
        else if (NAME[i] == ' ')
        {
            printf("\n");
        }
    }
    printf("\n\n");
    return 0;
}