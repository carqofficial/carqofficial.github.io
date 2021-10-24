#include <stdio.h>

int main()
{
    double a, b, c, d, ex1, ex2, ex3;
    printf("\nEnter the value of a : ");
    scanf("%lf", &a);
    printf("\nEnter the value of b : ");
    scanf("%lf", &b);
    printf("\nEnter the value of  c : ");
    scanf("%lf", &c);
    printf("\nEnter the value of  d : ");
    scanf("%lf", &d);

    ex1 = (a + b) * (c / d);
    ex2 = (a + b) * c / d;
    ex3 = a + (b * c) / d;

    printf("\nAnswer of expression 1 = %.2lf", ex1);
    printf("\nAnswer of expression 2 = %.2lf", ex2);
    printf("\nAnswer of expression 3 = %.2lf", ex3);
    return 0;
}