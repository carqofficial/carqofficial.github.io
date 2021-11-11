#include <stdio.h>
#include <conio.h>

int main()
{
    double v[500], p, r, n;
    printf("\nEnter the value of principle money : ");
    scanf("%lf", &p);
    printf("Enter the value of years to be spend : ");
    scanf("%d", &n);
    printf("Enter the yearly interest rate : ");
    scanf("%lf", &r);
    int i;
    for (i = 1; i <= n; i++)
    {
        p = p * (pow((1 + r), n));
        v[i] = p;
    }
    return 0;
}