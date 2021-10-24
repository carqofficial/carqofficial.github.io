#include <stdio.h>

int main()
{
    double x, y, a, b, c;
    printf("\nEnter the value of x : ");
    scanf("%lf", &x);
    printf("Enter the value of y : ");
    scanf("%lf", &y);
    a = (x + y) / (x - y);
    b = (x + y) / 2;
    c = (x + y) * (x - y);
    printf("\n(a)\tvalue of the expression of qs. (a) : %lf", a);
    printf("\n(b)\tvalue of the expression of qs. (b) : %lf", b);
    printf("\n(c)\tvalue of the expression of qs. (c) : %lf\n\n", c);

    return 0;
}