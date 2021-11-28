#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    printf("\nEnter the size of the matix : ");
    scanf("%d", &x);
    double T1[x][x], T2[x][x], TM[x][x], MAX1, MAX2, MAXTM;
    char MAX_CHAR[5000];
    int MAX_INT, len, count1, count2, countTM;
    MAX1 = 0;
    MAX2 = 0;
    MAXTM = 0;
    //first matrices
    printf("\n-------------------------");
    printf("\nEnter the first matrix : ");
    printf("\n-------------------------");
    int i, j, k;
    printf("\n");
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T1[i][j]);
            MAX_INT = (int)T1[i][j];
            int l = snprintf(MAX_CHAR, 5000, "%d", MAX_INT);
            len = strlen(MAX_CHAR);
            MAX1 = (MAX1 >= len) ? MAX1 : len;
        }
    }
    count1 = (MAX1 + 4);

    //second matrices
    printf("\n--------------------------");
    printf("\nEnter the second matrix : ");
    printf("\n--------------------------");
    printf("\n");
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T2[i][j]);
            MAX_INT = (int)T2[i][j];
            int l = snprintf(MAX_CHAR, 5000, "%d", MAX_INT);
            len = strlen(MAX_CHAR);
            MAX2 = (MAX2 >= len) ? MAX2 : len;
        }
    }
    count2 = (MAX2 + 4);

    //calculating multiplication of two matrices
    for (k = 1; k <= x; k++)
    {
        for (i = 1; i <= x; i++)
        {
            TM[k][i] = 0;
            for (j = 1; j <= x; j++)
            {
                TM[k][i] += (T1[k][j] * T2[j][i]);
            }
            MAX_INT = (int)TM[k][i];
            int s = snprintf(MAX_CHAR, 5000, "%d", MAX_INT);
            len = strlen(MAX_CHAR);
            MAXTM = (MAXTM >= len) ? MAXTM : len;
        }
    }
    countTM = (MAXTM + 4);

    printf("\n-----------------------------------------------");
    printf("\nThe matrix of the product of the two matrics : ");
    printf("\n-----------------------------------------------\n");
    for (i = 1; i <= x; i++)
    {
        printf("\n|");
        for (j = 1; j <= x; j++)
        {
            printf("%*.2lf  ", countTM, TM[i][j]);
        }
        printf("|");
    }
    printf("\n\n");
    return 0;
}