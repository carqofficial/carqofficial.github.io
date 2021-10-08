#include <stdio.h>

int main()
{
    double a, b, c, x;
    printf("\nValue of a : ");
    scanf("%lf", &a);
    printf("\nValue of b : ");
    scanf("%lf", &b);
    printf("\nValue of c : ");
    scanf("%lf", &c);
    x = a - (b / 3) + (c * 2) - 1;
    printf("\nValue of x : %lf", x);
    return 0;
}