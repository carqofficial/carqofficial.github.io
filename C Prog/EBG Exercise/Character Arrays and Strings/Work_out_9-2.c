#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char line[5000];
    printf("\nEnter the line : ");
    scanf("%[^\n]", line);
    system("cls");
    printf("\nYou have entered : \"%s\"", line);
    printf("\n");
    printf("\npress any key  to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}