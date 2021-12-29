#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void leap(int year)
{
    char buff[1000];
    int j = snprintf(buff, 1000, "%d", year);
    if ((buff[strlen(buff) - 1] == '0') && (buff[strlen(buff) - 2] == '0'))
    {
        if ((year % 400) == 0)
        {
            system("cls");
            printf("\n--------------------------------");
            printf("\nThe entered year is a leap year.");
            printf("\n--------------------------------\n\n");
        }
        else
        {
            system("cls");
            printf("\n------------------------------------");
            printf("\nThe entered year is not a leap year.");
            printf("\n------------------------------------\n\n");
        }
    }
    else
    {
        if ((year % 4) == 0)
        {
            system("cls");
            printf("\n--------------------------------");
            printf("\nThe entered year is a leap year.");
            printf("\n--------------------------------\n\n");
        }
        else
        {
            system("cls");
            printf("\n------------------------------------");
            printf("\nThe entered year is not a leap year.");
            printf("\n------------------------------------\n\n");
        }
    }
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
}

int main()
{
    int year_leap;
    printf("\nEnter the year : ");
    scanf("%d", &year_leap);
    leap(year_leap);
    return 0;
}