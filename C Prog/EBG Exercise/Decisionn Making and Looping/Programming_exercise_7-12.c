#include <stdio.h>
#include <math.h>

int main()
{
    double i, j, years, rd, scrap, original_cost, p;
    printf("\nEnter the present value of the item : ");
    scanf("%lf", &scrap);
    printf("Enter the original cost of the item : ");
    scanf("%lf", &original_cost);
    printf("Enter the rate of depreciation (per year) : ");
    scanf("%lf", &rd);
    years = 0;
    p = (scrap - 10);
    while (!((p <= scrap + 2) && (p >= scrap - 2)))
    {
        p = (original_cost * (pow((1 - rd), years)));
        years += 0.1;
    }
    printf("\n%lf\n\n", years);
    double year_ult = (years - 0.1);
    int year, day, month;
    year = (int)(year_ult - 0.4);
    month = (int)(((year_ult - year) * 12) - 0.4);
    day = (int)((year_ult - year - (month / 12)) * 30);
    printf("\nUseful life of the item is %d years %d months %d days\n\n", year, month, day);
    return 0;
}