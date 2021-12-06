#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char line[5000], one_ch;
    printf("\nEnter the line : ");
    int i = 0;
    do
    {
        one_ch = getchar();
        line[i] = one_ch;
        i++;
    } while (one_ch != '\n');
    system("cls");
    i -= 1;
    line[i] = '\0';
    printf("\nYou have entered : \"%s\"", line);
    printf("\n");
    printf("\npress any key  to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}