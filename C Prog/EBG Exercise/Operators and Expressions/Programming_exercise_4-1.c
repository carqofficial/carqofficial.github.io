#include<stdio.h>

int main()
{   
    /*variables declearation*/
    double A;
    int IA, REMINDER;

    /*values declearation*/
    printf("\nEnter A floating point number : ");
    scanf("%lf", &A);

    /*logic establishment*/
    IA = (int)A;
    REMINDER = (IA%10);
    printf("\nThe right-most digit of the integral part of the number %lf : %d\n\n", A, REMINDER);
    return 0;
}