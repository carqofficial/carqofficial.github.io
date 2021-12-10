#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    system("cls");
    char str1[1000], str2[1000];
    printf("\nEnter the the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    system("cls");
    if (strstr(str1, str2) == NULL)
    {
        printf("\nNo subset of string found.");
    }
    else
    {
        printf("\nString 2 is a subset of string 1.");
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}