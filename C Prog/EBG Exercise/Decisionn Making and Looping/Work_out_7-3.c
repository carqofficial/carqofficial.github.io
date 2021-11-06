#include <stdio.h>

int main()
{
    int RESULT, POWER, VALUE, i, LAST, j, ZERO;
    /*int RESULT, POWER, VALUE, i;*/
    VALUE = 2;
    ZERO = 0;
    RESULT = 1;
    LAST = 1;
    j = 1;
    while (j <= 20)
    {
        LAST *= VALUE;
        j++;
    }
    /*printf("\n%d\n", LAST);*/
    int count = 0;
    while (LAST != 0)
    {
        count++;
        LAST /= 10;
    }
    /*printf("\n%d\n", count);*/
    printf("\n%d^%02d = %0*d", VALUE, ZERO, count, RESULT);
    for (i = 1; i <= 20; i++)
    {
        RESULT *= VALUE;
        printf("\n%d^%02d = %0*d", VALUE, i, count, RESULT);
    }
    printf("\n");
    double RESULT_1;
    RESULT_1 = 1;
    printf("\n%d^(-%02d) = %.10lf", VALUE, ZERO, (RESULT_1));
    for (i = 1; i <= 20; i++)
    {
        RESULT_1 /= VALUE;
        printf("\n%d^(-%02d) = %.10lf", VALUE, i, (RESULT_1));
    }

    printf("\n\n");
    return 0;
}