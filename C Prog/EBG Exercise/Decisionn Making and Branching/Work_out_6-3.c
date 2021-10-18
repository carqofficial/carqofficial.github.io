#include <stdio.h>

int main()
{
    int n, i;
    double term, value_x, mul, mul_new, sum, sum_rundof;
    printf("\nFor how many terms does you want to calculate value of e^x with power-series : ");
    scanf("%d", &n);
    printf("\nENter the value of x : ");
    scanf("%lf", &value_x);
    mul = 1;
    sum = 1;

    for (i = 1; i <= n; i++)
    {
        mul_new = (value_x / i);
        mul *= mul_new;
        sum += mul;
    }
    sum_rundof = sum + (0.000045);
    printf("\nThe value of e^x  : %.4lf\n(calculates using maclaurin series of e^X || The value of x = %.2lf)\n\n", sum_rundof, value_x);
    return 0;
}