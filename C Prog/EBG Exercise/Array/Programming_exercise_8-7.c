#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int DIMENSION;
    /*system("cls");*/
    printf("\nEnter the dimension of the two matrices : ");
    scanf("%d", &DIMENSION);
    system("cls");

    double x1[DIMENSION + 1][DIMENSION + 1], x2[DIMENSION + 1][DIMENSION + 1], x12[DIMENSION + 1][DIMENSION + 1];
    int i, j, d3;
    int len3;
    int k3, l3, k;
    int count3;
    int MAX_INT3;
    int MAX3;
    char MAX_CHAR3[5000];
    count3 = 0;
    MAX3 = 0;

    printf("\n\n------------------");
    printf("\nFor first matrix : ");
    printf("\n------------------");
    printf("\n");
    for (i = 1; i <= DIMENSION; i++)
    {
        for (j = 1; j <= DIMENSION; j++)
        {
            printf("Enter the element a%d%d : ", i, j);
            scanf("%lf", &x1[i][j]);
        }
    }
    system("cls");

    printf("\n\n-------------------");
    printf("\nFor second matrix : ");
    printf("\n-------------------");
    printf("\n");
    for (i = 1; i <= DIMENSION; i++)
    {
        for (j = 1; j <= DIMENSION; j++)
        {
            printf("Enter the element a%d%d : ", i, j);
            scanf("%lf", &x2[i][j]);
        }
    }
    system("cls");

    for (i = 1; i <= DIMENSION; i++)
    {
        for (j = 1; j <= DIMENSION; j++)
        {
            x12[i][j] = 0;
            for (k = 1; k <= DIMENSION; k++)
            {
                x12[i][j] += (x1[i][k] * x2[k][j]);
            }
            MAX_INT3 = (int)x12[i][j];
            int d3 = snprintf(MAX_CHAR3, 5000, "%d", MAX_INT3);
            len3 = strlen(MAX_CHAR3);
            MAX3 = (MAX3 >= len3) ? MAX3 : len3;
        }
    }
    count3 = (MAX3 + 4);
    printf("\n\n-----------------------------------");
    printf("\nThe product of the two matrics : ");
    printf("\n-----------------------------------\n");
    for (i = 1; i <= DIMENSION; i++)
    {
        printf("\n|");
        for (j = 1; j <= DIMENSION; j++)
        {
            printf("%*.2lf  ", count3, x12[i][j]);
        }
        printf("|");
    }
    printf("\n\npress any key to exit....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}