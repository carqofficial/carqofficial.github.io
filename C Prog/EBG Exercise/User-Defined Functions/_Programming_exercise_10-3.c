#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int factorial(int *b)
{
    int i, fac;
    fac = 1;
    for (i = 1; i <= *b; i++)
    {
        fac *= i;
    }
    return (fac);
}

double SUM(double *Fx, double *x_tm, int *n)
{
    int sign;
    double term;
    term = *x_tm;
    sign = 1;
    if ((*n) <= 11)
    {
        (*Fx) += (term * sign);
        term = (pow(*x_tm, *n) / (factorial(n)));
        sign *= -1;
        *n = *n + 2;
        return SUM(Fx, x_tm, n);
    }
    else if ((*n) == 12)
    {
        return (*Fx);
    }
}

int main()
{
    double x_put, Fx_put;
    int n_put;
    printf("\nEnter the value of x : ");
    scanf("%lf", &x_put);
    n_put = 1;
    Fx_put = 0;
    double x_temp;
    x_temp = x_put;
    SUM(&Fx_put, &x_temp, &n_put);
    printf("\nValue of the function (till n = 20) : %.2lf\n\n", Fx_put);
    return 0;
}