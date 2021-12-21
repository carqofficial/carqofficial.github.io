#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int factorial(int *b)
{
    int j, fac;
    fac = 1;
    for (j = 1; j <= *b; j++)
    {
        fac *= j;
    }
    return (fac);
}

double SUM(double *Fx, double *x_tm)
{
    int i, sign, n;
    double term;
    term = *x_tm;
    sign = 1;
    n = 1;
    for (i = 1; i <= 11; i += 2)
    {
        (*Fx) += (term * sign);
        term = (pow(*x_tm, i) / (factorial(&i)));
        sign *= -1;
    }
    return (*Fx);
}

int main()
{
    double x_put, Fx_put, rad_x;
    int n_put;
    printf("\nEnter the value of x : ");
    scanf("%lf", &x_put);
    n_put = 1;
    Fx_put = 0;
    double x_temp;
    x_temp = x_put;
    SUM(&Fx_put, &x_temp);
    printf("\nValue of the function (till n = 20) : %.2lf\n\n", Fx_put);
    return 0;
}