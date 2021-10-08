#include <stdio.h>

int main()
{
    int i, N;
    double A;

    printf("\nEnter a number and its sequence od square will be calculatd : ");
    scanf("%lf", &A);

    printf("\nEnter the highest power of %.2lf you want : ", A);
    scanf("%d", &N);
    i = 0;

    while (i <= N)
    {
        printf("\n%lf", A);
        A *= A;
        i += 1;
    }

    return 0;
}
