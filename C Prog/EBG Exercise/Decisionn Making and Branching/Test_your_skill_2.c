#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double n, sam_n;
    int N1, N2, N3, N4, N5, N6, N7, N8, N9, N0, NDOT, M;
    int LEN;
    char CH_n[5000];
    N0 = 0;
    N1 = 0;
    N2 = 0;
    N3 = 0;
    N4 = 0;
    N5 = 0;
    N6 = 0;
    N7 = 0;
    N8 = 0;
    N9 = 0;
MAIN:
    printf("\nEnter a number : ");
    scanf("%lf", &n);
    sam_n = n;

    int j = snprintf(CH_n, 5000, "%lf", n);
    /*printf("\nThe number you have entered : %s", CH_n);*/
    LEN = strlen(CH_n);

    int before_decimal = atoi(CH_n);
    int after_decimal;
    int count = 0;

    while (before_decimal != 0)
    {
        count++;
        before_decimal /= 10;
    }
    /*printf("\nLength : %d", LEN);*/
    /*int before_decimal = atoi(CH_n);
    int after_decimal;
    int total_count;*/

    int aftr, count_after_demical, ASK_0;
    ASK_0 = 0;
    for (aftr = (LEN - 1); aftr >= (count - 1); aftr--)
    {
        if (CH_n[aftr] == '0')
        {
            ASK_0++;
        }
    }

    /*printf("\nNumber of zeros : %d", ASK_0);*/

    for (M = 0; M <= (LEN - 1); M++)
    {
        if (CH_n[M] == '1')
        {
            N1++;
        }
        if (CH_n[M] == '2')
        {
            N2++;
        }
        if (CH_n[M] == '3')
        {
            N3++;
        }
        if (CH_n[M] == '4')
        {
            N4++;
        }
        if (CH_n[M] == '5')
        {
            N5++;
        }
        if (CH_n[M] == '6')
        {
            N6++;
        }
        if (CH_n[M] == '7')
        {
            N7++;
        }
        if (CH_n[M] == '8')
        {
            N8++;
        }
        if (CH_n[M] == '9')
        {
            N9++;
        }
        if (CH_n[M] == '0')
        {
            N0++;
        }
        if (CH_n[M] == '.')
        {
            NDOT++;
        }
    }

    if (NDOT >= 1)
    {
        printf("\n\nEntered number is not integer type.\n");
    }
    printf("\nNumbers of digits before decimal place : %d\n", count);
    printf("\nNumbers of digits after decimal place : %d\n", (LEN - ASK_0 - count - 1));
    printf("\nNumer of 1 : %d\t\tNumer of 2 : %d\t\tNumer of 3 : %d\nNumer of 4 : %d\t\tNumer of 5 : %d\t\tNumer of 6 : %d\nNumer of 7 : %d\t\tNumer of 8 : %d\t\tNumer of 9 : %d\n\t\t\tNumer of 0 : %d\n\n", N1, N2, N3, N4, N5, N6, N7, N8, N9, (N0 - ASK_0));
    int CHOICE;
WRN_CHOICE:

    printf("\nDo you want to start the program once again?");
    printf("\n--------------------------------------------");
    printf("\n1. Yes\n2. No");
    printf("\n--------------------------------------------\n");
    scanf("%d", &CHOICE);
    if (CHOICE == 1)
    {
        goto MAIN;
    }
    else if (CHOICE == 2)
    {
        goto END;
    }
    else if ((CHOICE != 1) && (CHOICE != 2))
    {
        printf("\nWrong Input!!\n");
        goto WRN_CHOICE;
    }

END:
    printf("\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}