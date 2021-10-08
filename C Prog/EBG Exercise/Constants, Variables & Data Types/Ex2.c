#include<stdio.h>

int main()
{
    /*declearing the variable*/
    float a;

    /*declearing the values*/
    printf("\nEnter a Number : ");
    scanf("%f", &a);
    
    
    /*establishing the logic*/
    if( a<100)
    {
        printf("\nYou have entered the number less than 100");
    }

    else
    {
        printf("\nYou have enter the number more than 100");
    }

    return 0;
}