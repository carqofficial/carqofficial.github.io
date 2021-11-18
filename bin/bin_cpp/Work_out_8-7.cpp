#include <stdio.h>
#include <conio.h>
#include "stdafx.h"

int main()
{
    int X, Y;
    printf("\nEnter the dimension on the matrix (in (ixj) formate) : ");
    scanf("%dx%d", &X, &Y);
    double T[X][Y];
    printf("\nEnter the matrix : ");
    int i, j;
    printf("\n");
    for (i = 1; i <= X; i++)
    {
        for (j = 1; j <= Y; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T[i][j]);
        }
    }

    /*printf("\nThe Matrix is : :' %lf  %lf  %lf ':", T[1][1], T[1][2], T[1][3]);*/
    for (i = 1; i <= X; i++)
    {
        if (i == 1)
        {
            printf("\nThe Matrix is : |%c ", 238);
            for (j = 1; j <= (Y - 1); j++)
            {
                /*printf("\n                :  %lf  %lf  %lf  :", );*/
                printf("%.2lf  ", T[i][j]);
            }
            printf("%.2lf '|", T[i][Y]);
        }
        else if (i == X)
        {
            printf("\n                |_ ");
            for (j = 1; j <= (Y - 1); j++)
            {
                /*printf("\n                :  %lf  %lf  %lf  :", );*/
                printf("%.2lf  ", T[i][j]);
            }
            printf("%.2lf _|", T[i][Y]);
        }
        else
        {
            printf("\n                |  ");
            for (j = 1; j <= Y; j++)
            {
                /*printf("\n                :  %lf  %lf  %lf  :", );*/
                printf("%.2lf  ", T[i][j]);
            }
            printf("|");
        }
    }

    return 0;
}