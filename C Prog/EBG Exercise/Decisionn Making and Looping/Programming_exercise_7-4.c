#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    double v[5000], p, r, q;
    int v_digi;
    int n;
    printf("\nEnter the value of principle money : ");
    scanf("%lf", &p);
    printf("Enter the value of years to be spend : ");
    scanf("%d", &n);
    printf("Enter the yearly interest rate : ");
    scanf("%lf", &r);
    q = p;
    int i;
    for (i = 1; i <= n; i++)
    {
        v[i] = p * (pow((1 + (r / 100)), i));
    }
    int count;
    count = 0;
    v_digi = (int)v[n];
    while (v_digi != 0)
    {
        /*printf("\n%d\n", v_digi);*/
        count++;
        v_digi = v_digi / 10;
    }
    /*printf("\n%d\n", count);*/
    printf("\nTime Interval(Years)                   Interest                   Net Value");
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("\n        %02d                             %*lf                %*lf", i, count, (v[i] - q), (count + 2), v[i]);
        }
        else if (i != 1)
        {
            printf("\n        %02d                             %*lf                %*lf", i, count, (v[i] - v[i - 1]), (count + 2), v[i]);
        }
    }
    printf("\n\n");
    return 0;
}