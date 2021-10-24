#include <stdio.h>

int main()
{
    int num, max_digit, value, i, digit, forsn, i1;
    printf("\nEnter a 4 digit number : ");
    scanf("%d", &num);
    max_digit = 4;
    value = num;
    i = 0;

    printf("\nPrinting the digits of the given number in provided formate : \n");
    while (i <= (max_digit - 1))
    {
        digit = value % 10;
        char name[100];
        forsn = snprintf(name, 100, "%d", value);
        for (i1 = 0; i1 <= forsn; i1++)
        {
            putchar(name[i1]);
            putchar(' ');
        }
        printf("\n");
        value /= 10;
        i++;
    }

    return 0;
}