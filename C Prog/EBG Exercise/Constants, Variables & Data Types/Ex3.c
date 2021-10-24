#include<stdio.h>

int main()
{
    /*delearing variables*/
    int PERIOD, YEAR;
    double AMOUNT, IN_RATE, VALUE;
    /*it i use hear the float then the digits agter the point would not be correct so we have to use hear double*/

    /*declearing values*/
    printf("\nEnter the amount, interest rate, period : ");
    scanf("%lf %lf %d", &AMOUNT, &IN_RATE, &PERIOD);
    YEAR = 1;

    /*printing*/
    printf("\n    Year            Value       ");
    
    /*logic establishing*/
    while( YEAR <= PERIOD )
    {
        VALUE = AMOUNT*( 1 + IN_RATE );
        printf("\n    %3d           %.3lf    ", YEAR, VALUE);
        AMOUNT = VALUE;
        YEAR = YEAR + 1;
    }

    return 0;
}