#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000

int main()
{
    int year;
    float amount, value, rate;
    year = 0;
    amount = PRINCIPAL;
    rate = 0.11;

    while(year <= PERIOD)
    {
        printf("%2d %8.2f\n", year, amount);
            value = amount*(1 + rate);
            year = year + 1;
            amount = value;
    }

}