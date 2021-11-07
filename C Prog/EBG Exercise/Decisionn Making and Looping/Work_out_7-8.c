#include <stdio.h>

int main()
{
    long long int num_sample, num;
    int reminder[70000], i, count, sum_num;
    printf("\nEnter the number : ");
    scanf("%lld", &num);
    sum_num = 0;
    num_sample = num;
    count = 1;

    for (i = 1; num_sample != 0; i++)
    {
        reminder[i] = (num_sample % 2);
        /*printf("%d", reminder[i]);*/
        num_sample /= 2;
        count++;
    }

    /*printf("\n\ncount = %d\n\n", count);*/
    int j;
    printf("\nAfter converting the decimal number to binary : ");
    for (j = (count - 1); j >= 1; j--)
    {
        /*sum_num = (sum_num * 10) + reminder[j];*/
        printf("%d", reminder[j]);
    }
    printf("\n\n");
    /*printf("\n\nBinary converted : %d", sum_num);*/
    return 0;
}