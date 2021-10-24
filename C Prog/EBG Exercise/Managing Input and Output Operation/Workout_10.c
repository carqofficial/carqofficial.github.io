#include<stdio.h>

int main()
{
    double b;
    printf("\nEnter a number : ");
    scanf("%lf", &b);
    printf("\n%*.*lf\n\n", 7,2, b);
    return 0;
}