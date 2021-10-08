#include<stdio.h>

int main()
{
    /*variables declearation*/
    int i,YEAR;
    float AMOUNT, INTEREST, EXTRA, VALUE;
    /*variables value*/
    AMOUNT = 5000;
    i=0;
    INTEREST = 0.11;
    YEAR = 9;

    printf("\n    YEAR      AMOUNT");
    printf("\n    ----      ------  \n");
    /*now the while function to use*/
    while(i<=YEAR)
    {
        VALUE = AMOUNT*(1 + INTEREST);
        printf("%7d     %10.5f     \n", (i+1), VALUE);
        i = i + 1;
        AMOUNT = VALUE;
    }
    /*end of while function*/
    return 0;
}
