#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int real_dinom_checker(double *a, double *b, double *c)
{
    double checker;
    int ret;
    checker = (pow((*b), 2) - (4 * (*a) * (*c)));
    if (checker >= 0)
    {
        ret = 1;
    }
    else if (checker < 0)
    {
        ret = 0;
    }
    return (ret);
}
void root_cal(double *a, double *b, double *c, double *x, double *x1, double *x2)
{
    double dinome;
    dinome = sqrt((pow((*b), 2) - (4 * (*a) * (*c))));
    *x1 = ((-(*b) + (dinome)) / (2 * (*a)));
    *x2 = ((-(*b) - (dinome)) / (2 * (*a)));
}

int main()
{
    double a, b, c, x;
    printf("\nEnter the value of a : ");
    scanf("%lf", &a);
    printf("Enter the value of b : ");
    scanf("%lf", &b);
    printf("Enter the value of c : ");
    scanf("%lf", &c);
    int str;
    str = real_dinom_checker(&a, &b, &c);
    if (str == 0)
    {
        printf("\nThe equation have imaginary root(s).\n\n");
        printf("press any key to exit.....");
        getch();
        printf("\n\n");
        exit(0);
    }
    else if (str == 1)
    {
        double rt1, rt2;
        root_cal(&a, &b, &c, &x, &rt1, &rt2);
        printf("\nRoot(s) of the equation : ");
        if (rt1 != rt2)
        {
            printf("\nx1 = %.2lf\nx2 = %.2lf\n\n", rt1, rt2);
            printf("press any key to exit.....");
            getch();
            printf("\n\n");
        }
        else if (rt1 == rt2)
        {
            printf("\nx = %.2lf\n\n", rt1);
            printf("press any key to exit.....");
            getch();
            printf("\n\n");
        }
    }
    return 0;
}