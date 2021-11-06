#include <stdio.h>

int main()
{
    int i, j, n, k, checker_prime, count_prime, l, sm;
    l = 1;
    printf("\nEnter the value of n : ");
    scanf("%d", &n);
    k = 0;
    sm = 1;
    int assign[n];
    printf("\nPrime numbers between 1 and %d : ", n);
    printf("\n----------------------------------------\n");
    for (i = 3; i <= n; i++)
    {
        count_prime = 0;
        for (j = 2; j <= i; j++)
        {
            checker_prime = i % j;
            if (checker_prime == 0)
            {
                count_prime++;
            }
        }
        /*if (count_prime <= 1)
        {
            printf("%d", i);
        }*/
        if (count_prime == 1)
        {
            k++;
            if (k == 1)
            {
                printf("%d", i);
            }
            else if (k > 1)
            {
                printf(", %d", i);
            }
            while (sm <= k)
            {
                assign[sm] = i;
                sm++;
            }
        }
    }
    printf("\n");
    while (l <= k)
    {
        while (assign[l] != 0)
        {
            printf("-");
            assign[l] /= 10;
        }
        if (l < k)
        {
            printf("--");
        }
        else if (l == k)
        {
            printf("\n");
        }
        l++;
    }
    printf("\n");
    int m, s;
    m = k;
    printf("------------------------------------------");
    while (m != 0)
    {
        printf("-");
        m /= 10;
    }
    printf("\nNumber of prime numbers betwen 1 to %d : %d", n, k);
    printf("\n------------------------------------------");
    s = k;
    while (s != 0)
    {
        printf("-");
        s /= 10;
    }
    printf("\n\n");
    return 0;
}