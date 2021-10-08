#include <stdio.h>

int main()
{
    int months, days, days2;

    printf("\nEnter the days no : ");
    scanf("%d", &days2);

    months = (days2 / 30);
    days = (days2 % 30);

    printf("\nYour entered days = %d months %d days\n\n", months, days);

    return 0;
}