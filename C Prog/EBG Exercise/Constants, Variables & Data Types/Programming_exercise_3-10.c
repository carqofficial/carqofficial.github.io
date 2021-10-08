#include <stdio.h>

int main()
{
    int days, years, months, days2, days1, days3;

    printf("\nEnter the age in days : ");
    scanf("%d", &days2);

    years = (days2 / (365));
    days1 = days2 - (years * 365);
    months = days1 / 30;
    days3 = days1 - (months * 30);

    printf("\nYour age is the %d years %d months %d days", years, months, days3);

    return 0;
}