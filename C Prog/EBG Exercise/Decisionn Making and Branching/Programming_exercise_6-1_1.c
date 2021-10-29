#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double INTEGER;
    int CHECKER;
    int N1, N2, N3, N4, N5, N6, N7, N8, N9, N0, Ndot;
    char num[500];
START:
    printf("\nEnter an integer number : ");
    scanf("%lf", &INTEGER);

    int j = snprintf(num, 500, "%lf", INTEGER);
    int len = strlen(num);
    long long int before_decimal = atoi(num);
    char num_before[500];
    int m = snprintf(num_before, 500, "%lld", before_decimal);
    int len_BD = strlen(num_before);
    int k, N0BD, NDOTBD;
    for (k = 0; k < len_BD; k++)
    {
        if (num_before[k] == '0')
        {
            N0BD++;
        }
    }

    N0 = 0;

    int i;
    for (i = 0; i < len; i++)
    {
        if (num[i] == '0')
        {
            N0++;
        }
    }
    int N0AD;
    N0AD = (N0 - N0BD);
    if (N0AD < 6)
    {
        printf("\nYou have enter floating type number!\n");
        goto START;
    }
    else
    {
        goto NEXT;
    }
NEXT:
    CHECKER = (((int)INTEGER) % 2);
    if (CHECKER == 0)
    {
        printf("\nNUMBER IS EVEN.\n");
    }
    else if (CHECKER != 0)
    {
        printf("\nNUMBER IS ODD.\n");
    }

    printf("\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}