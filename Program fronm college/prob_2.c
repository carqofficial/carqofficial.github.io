#include <stdio.h>

int main()
{
    int num, i, max_num, digit, value, sum;

    printf("\nEnter a number : ");
    scanf("%d", &num);
    i = 0;
    max_num = 4;
    value = num;
    sum = 0;

    while (i <= max_num)
    {
        digit = value % 10;
        value /= 10;
        sum += digit;
        i++;
    }

    printf("\nSum of the digits you have entered : %d\n\n", sum);

    return 0;
}
