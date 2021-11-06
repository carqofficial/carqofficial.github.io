#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    int YEAR, DAYS, M_num;
    char months[500];
START:
    printf("\nTo know the number of days for a specific month in a specific year : ");
    printf("\nEnter the year : ");
    scanf(" %d", &YEAR);
    printf("Enter the months name : ");
    scanf(" %s", months);
    /*printf("\n%s", months);*/
    /*help -->
    1. https://stackoverflow.com/questions/8222495/how-to-compare-strings-in-an-if-statement
    2. https://stackoverflow.com/questions/16570716/warning-format-s-expects-type-char-but-argument-2-has-type-char
    */

    if ((YEAR % 4 == 0) || (YEAR % 100 == 0) || (YEAR % 400 == 0))
    {

        if (((strcmp(months, "January")) == 0) || ((strcmp(months, "january")) == 0) || ((strcmp(months, "JANUARY")) == 0))
        {
            M_num = 1;
        }
        if (((strcmp(months, "February")) == 0) || ((strcmp(months, "february")) == 0) || ((strcmp(months, "FEBRUARY")) == 0))
        {
            M_num = 0;
        }
        if (((strcmp(months, "March")) == 0) || ((strcmp(months, "march")) == 0) || ((strcmp(months, "MARCH")) == 0))
        {
            M_num = 3;
        }
        if (((strcmp(months, "April")) == 0) || ((strcmp(months, "april")) == 0) || ((strcmp(months, "APRIL")) == 0))
        {
            M_num = 4;
        }
        if (((strcmp(months, "May")) == 0) || ((strcmp(months, "may")) == 0) || ((strcmp(months, "MAY")) == 0))
        {
            M_num = 5;
        }
        if (((strcmp(months, "June")) == 0) || ((strcmp(months, "june")) == 0) || ((strcmp(months, "JUNE")) == 0))
        {
            M_num = 6;
        }
        if (((strcmp(months, "July")) == 0) || ((strcmp(months, "july")) == 0) || ((strcmp(months, "JULY")) == 0))
        {
            M_num = 7;
        }
        if (((strcmp(months, "August")) == 0) || ((strcmp(months, "august")) == 0) || ((strcmp(months, "AUGUST")) == 0))
        {
            M_num = 8;
        }
        if (((strcmp(months, "September")) == 0) || ((strcmp(months, "september")) == 0) || ((strcmp(months, "SEPTEMBER")) == 0))
        {
            M_num = 9;
        }
        if (((strcmp(months, "October")) == 0) || ((strcmp(months, "october")) == 0) || ((strcmp(months, "OCTOBER")) == 0))
        {
            M_num = 10;
        }
        if (((strcmp(months, "November")) == 0) || ((strcmp(months, "november")) == 0) || ((strcmp(months, "NOVEMBER")) == 0))
        {
            M_num = 11;
        }
        if (((strcmp(months, "December")) == 0) || ((strcmp(months, "december")) == 0) || ((strcmp(months, "DECEMBER")) == 0))
        {
            M_num = 12;
        }
    }
    else if ((YEAR % 4 != 0) || (YEAR % 100 != 0) || (YEAR % 400 != 0))
    {
        if (((strcmp(months, "January")) == 0) || ((strcmp(months, "january")) == 0) || ((strcmp(months, "JANUARY")) == 0))
        {
            M_num = 1;
        }
        if (((strcmp(months, "February")) == 0) || ((strcmp(months, "february")) == 0) || ((strcmp(months, "FEBRUARY")) == 0))
        {
            M_num = 2;
        }
        if (((strcmp(months, "March")) == 0) || ((strcmp(months, "march")) == 0) || ((strcmp(months, "MARCH")) == 0))
        {
            M_num = 3;
        }
        if (((strcmp(months, "April")) == 0) || ((strcmp(months, "april")) == 0) || ((strcmp(months, "APRIL")) == 0))
        {
            M_num = 4;
        }
        if (((strcmp(months, "May")) == 0) || ((strcmp(months, "may")) == 0) || ((strcmp(months, "MAY")) == 0))
        {
            M_num = 5;
        }
        if (((strcmp(months, "June")) == 0) || ((strcmp(months, "june")) == 0) || ((strcmp(months, "JUNE")) == 0))
        {
            M_num = 6;
        }
        if (((strcmp(months, "July")) == 0) || ((strcmp(months, "july")) == 0) || ((strcmp(months, "JULY")) == 0))
        {
            M_num = 7;
        }
        if (((strcmp(months, "August")) == 0) || ((strcmp(months, "august")) == 0) || ((strcmp(months, "AUGUST")) == 0))
        {
            M_num = 8;
        }
        if (((strcmp(months, "September")) == 0) || ((strcmp(months, "september")) == 0) || ((strcmp(months, "SEPTEMBER")) == 0))
        {
            M_num = 9;
        }
        if (((strcmp(months, "October")) == 0) || ((strcmp(months, "october")) == 0) || ((strcmp(months, "OCTOBER")) == 0))
        {
            M_num = 10;
        }
        if (((strcmp(months, "November")) == 0) || ((strcmp(months, "november")) == 0) || ((strcmp(months, "NOVEMBER")) == 0))
        {
            M_num = 11;
        }
        if (((strcmp(months, "December")) == 0) || ((strcmp(months, "december")) == 0) || ((strcmp(months, "DECEMBER")) == 0))
        {
            M_num = 12;
        }
    }
    /*printf("\n%d", M_num);*/
    switch (M_num)
    {
    case 2:
        DAYS = 28;
        break;
    case 0:
        DAYS = 29;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        DAYS = 30;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        DAYS = 31;
        break;
    default:
        printf("\nEnter input carefully!\n");
        goto START;
        break;
    }
    printf("\nAccording to you input");
    printf("\nDays in %s : %d\n\n", months, DAYS);
    return 0;
}