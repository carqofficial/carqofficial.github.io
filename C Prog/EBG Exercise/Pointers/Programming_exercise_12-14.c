#include <stdio.h>

struct NEW
{
    int day;
    int month;
    int year;
} date, *ptr_date;

int main()
{
    printf("\nEnter today's date (in DD-MM-YYYY formate) : ");
    scanf("%d-%d-%d", &date.day, &date.month, &date.year);
    ptr_date = &date;
    printf("\nYou have entered : %d-%d-%d\n\n", ptr_date->day, ptr_date->month, ptr_date->year);
    return 0;
}