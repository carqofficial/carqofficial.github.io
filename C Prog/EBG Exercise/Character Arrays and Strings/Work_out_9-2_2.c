#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char line[5000], one_ch;
    printf("\nEnter the line : ");
    gets(line);  
    system("cls");
    printf("\nYou have entered : \"%s\"", line);
    printf("\n");
    printf("\npress any key  to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}