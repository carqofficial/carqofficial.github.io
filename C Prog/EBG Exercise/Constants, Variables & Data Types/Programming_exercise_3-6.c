#include<stdio.h>
#define INRATE 0.11


int main()
{
    /*declearing variables*/
    int year, Nyear;
    double amount, value;
    

    /*initializing variable*/
    printf("\nEnter the total amount : ");
    scanf("%lf", &amount);
    printf("For how many years you want to invest the money : ");
    scanf("%d", &Nyear);
    year = 1;

    printf("\n     Year          Value     ");

    /*logic*/
    while(year<=Nyear)
    {
        value = amount*(1 + INRATE);
        printf("\n  %5d          %5.4lf      ", year, value);
        year = (year + 1);
        amount = value;
    }

    return 0;
}