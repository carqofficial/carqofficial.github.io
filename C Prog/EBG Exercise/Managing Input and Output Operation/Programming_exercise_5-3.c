#include<stdio.h>

int main()
{
    double b;
    printf("\nEnter a number (it may be real number or integer number) : ");
    scanf("%lf", &b);

    printf("\nRounding off what you have entered : %.0lf\n\n", b);

    return 0;
}