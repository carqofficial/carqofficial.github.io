#include <stdio.h>
#include <math.h>

#define LAMDA 0.001

int main()
{
    double r, mul, t;
    int R, i, q, MAX;

    printf("\nMaximum value of t : ");
    scanf("%lf", &MAX);

    printf("\n");

    for (i = 1; i <= 28; i++)
    {
        printf("--");
    }

    printf("\n");

    for (t = 0; t <= MAX; t += 150)
    {
        printf("\n|");
        mul = -(t * LAMDA);
        r = exp(mul);
        R = (int)((50 * r) + 0.5);
        for (q = 0; q <= R; q++)
        {
            printf("*");
        }
        printf("#");
    }

    printf("\n");

    return 0;
}