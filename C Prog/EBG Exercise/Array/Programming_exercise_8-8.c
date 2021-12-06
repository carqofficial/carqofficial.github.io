#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int DIMENSION_x, DIMENSION_y;
start:
    printf("\nEnter the dimension of the square matrix (in (ixi) formate): ");
    scanf("%dx%d", &DIMENSION_x, &DIMENSION_y);
    system("cls");

    int x[DIMENSION_x + 1][DIMENSION_y + 1];
    int i, j;
    if ((DIMENSION_x > 1) && (DIMENSION_y > 1) && (DIMENSION_x == DIMENSION_y))
    {
        /*for (i = 1; i <= DIMENSION_x; i++)
        {
            for (j = 1; j <= DIMENSION_y; j++)
            {
                if (i = j)
                {
                    x[i][j] = 0;
                }
            }
        }
        for (i = 1; i <= DIMENSION_x; i++)
        {
            for (j = 1; j <= DIMENSION_y; j++)
            {
                if (j > i)
                {
                    x[i][j] = -1;
                }
            }
        }
        for (i = 1; i <= DIMENSION_x; i++)
        {
            for (j = 1; j <= DIMENSION_y; j++)
            {
                if (j < i)
                {
                    x[i][j] = 1;
                }
            }
        }*/
        for (i = 1; i <= DIMENSION_x; i++)
        {
            for (j = 1; j <= DIMENSION_y; j++)
            {
                x[i][j] = (j > i) ? -1 : ((j < i) ? 1 : 0);
            }
        }
        printf("\n\n---------------");
        printf("\nThe matrix is :");
        printf("\n---------------\n");
        for (i = 1; i <= DIMENSION_x; i++)
        {
            printf("\n|");
            for (j = 1; j <= DIMENSION_y; j++)
            {
                printf("%4d", x[i][j]);
            }
            printf("   |");
            if (i < DIMENSION_x)
            {
                printf("\n|");
                for (j = 1; j <= DIMENSION_y; j++)
                {
                    printf("    ");
                }
                printf("   |");
            }
        }
        printf("\n\npress any key to exit.....");
        getch();
        printf("\n\n");
        system("cls");
    }
    else
    {
        printf("\nEntered wrong dimension of the matrix!\n");
        goto start;
    }
    return 0;
}