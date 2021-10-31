#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double num;
    int i;
    int before_dcml;
    int len;
    int N0, before_N0, after_N0;
    int p, prime_checker, prime_checker_count;

start:
    prime_checker_count = 0;
    N0 = 0;
    before_N0 = 0;

    printf("\nEnter an integer number : ");
    scanf("%lf", &num);

    char buff[500];
    int j = snprintf(buff, 500, "%lf", num);

    len = strlen(buff);
    /*printf("%d", len);*/

    before_dcml = atoi(buff);

    /*printf("%d", before_dcml);*/
    /*char before_buff[500];
    int m = snprintf(before_buff, 500, "%d", before_dcml);*/

    int count = 0;

    while (before_dcml != 0)
    {
        count++;
        before_dcml /= 10;
    }
    for (j = 0; j <= (count - 1); j++)
    {
        if (buff[j] == '0')
        {
            before_N0++;
        }
    }
    for (j = 0; j <= (len - 1); j++)
    {
        if (buff[j] == '0')
        {
            N0++;
        }
    }
    after_N0 = N0 - before_N0;

    /*
    printf("\nN0 = %d", N0);
    printf("\nbefore_No = %d", before_N0);
    printf("\nafter_N0 = %d", after_N0);
    */

    if (after_N0 != 6)
    {
        printf("\nYou have entered floating type number.\n");
        goto start;
    }

    else if (after_N0 == 6)
    {

        for (p = 2; p <= num; p++)
        {
            prime_checker = (((int)num) % p);

            if (prime_checker == 0)
            {

                prime_checker_count++;
            }
        }

        if (prime_checker_count > 1)
        {
            printf("\nYour entered number is not a prime number.\n\n");
        }
        else if (prime_checker_count == 1)
        {
            printf("\nYour entered number is a prime number.\n\n");
        }
    }

    return 0;
}