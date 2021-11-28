#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int CITY[11], DAY[32], d, c;
    double TEMP[31][11], MAX, MIN;
    MAX = 0;
    for (d = 1; d <= 31; d++)
    {
        printf("\nFor Day %2d, Enter the temparature of \n", d);
        for (c = 1; c <= 10; c++)
        {
            printf("city %2d : ", c);
            scanf("%lf", &TEMP[d][c]);
            MAX = (MAX >= TEMP[d][c]) ? MAX : TEMP[d][c];
            if ((c != 1) && (d != 1))
            {
                MIN = (TEMP[d][c - 1] >= TEMP[d][c]) ? TEMP[d][c - 1] : TEMP[d][c];
            }
        }
    }
    system("cls");
    for (d = 1; d <= 31; d++)
    {
        for (c = 1; c <= 10; c++)
        {
            if (TEMP[d][c] == MAX)
            {
                printf("\nMaximum temparature recorded %.2lf*C in day-%d on city-%d\n", MAX, d, c);
            }
            if (TEMP[d][c] == MIN)
            {
                printf("\nMiniimum temparature recorded %.2lf*C in day-%d on city-%d\n", MIN, d, c);
            }
        }
    }
    printf("\n\npress any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}