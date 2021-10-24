#include <stdio.h>

int main()
{
    long long int a;
    double b;
    char c[100];
    printf("\nEnter values of a, b and c : ");
    if (scanf("%lld %lf %s", &a, &b, &c) == 3)
    {
        printf("\na = %lld    b = %lf   c = %s", a, b, c);
    }
    else
    {
        printf("\nError in input.");
    }
    return 0;
}