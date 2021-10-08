#include<stdio.h>

int main()
{
    /*variables declearation*/
    double A;
    int IA, REMINDER;

    /*values declearation*/
    printf("\nEnter a floating-point number : ");
    scanf("%lf", &A);

    IA = (int)A;
    REMINDER = (IA%100);

    printf("\nThe right-most two digits of the integral part of the number %lf : %d\n\n", A, REMINDER);

    return 0;
}