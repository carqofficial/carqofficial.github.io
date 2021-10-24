#include<stdio.h>

int main()
{
    /*declearation on variables*/
    float RICE, SUGAR;

    /*initialization of variables*/
    RICE = 16.75;
    SUGAR = 15.00;

    /*printing*/
    printf("\n*** LIST OF ITEMS ***");
    printf("\nItem       Price");
    printf("\nRice       Rs%.2f", RICE);
    printf("\nSugar      Rs%.2f", SUGAR);

    return 0;
}