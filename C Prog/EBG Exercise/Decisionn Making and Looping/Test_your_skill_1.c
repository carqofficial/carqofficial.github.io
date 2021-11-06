#include <stdio.h>
#include <conio.h>

int main()
{
    long long int n;
    printf("\nEnter a integer number to calculate its factorial : ");
    scanf("%lld", &n);
    long long int i;
    long long j;
    i = 1;
    j = 1;
    while (i <= n)
    {
        j *= i;
        i++;
    }
    printf("\nFactorial of %lld : %lld\n\n", n, j);
    return 0;
}