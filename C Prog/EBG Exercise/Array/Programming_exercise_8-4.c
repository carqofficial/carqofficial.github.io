#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int row;
    printf("\nEnter the number of the rows : ");
    scanf("%d", &row);

    system("cls");

    int p[row + 1][row + 1], i, j, space, MAX;
    MAX = 0;
    p[0][0] = 0;
    p[0][1] = 1;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
            MAX = (MAX >= p[i][j]) ? MAX : p[i][j];
        }

        p[i][0] = 0;

        for (j = (i + 1); j <= row; j++)
        {
            p[i][j] = 0;
        }
    }

    int count = 0;
    while (MAX != 0)
    {
        count++;
        MAX /= 10;
    }

    int k;
    printf("\n\n------------------------------------");
    printf("\nPascal triangle for mentioned rows : ");
    printf("\n------------------------------------\n");
    for (i = 1; i <= row; i++)
    {
        printf("\n");
        for (space = 1; space <= (row - i + 2); space++)
        {
            printf(" ");
            for (k = 1; k < count; k++)
            {
                printf(" ");
            }
        }
        for (j = 1; j <= i; j++)
        {
            printf("%*d ", count, p[i][j]);
            for (k = 1; k < count; k++)
            {
                printf(" ");
            }
        }
    }
    printf("\n\npress any key to exit.....");
    getch();
    system("cls");
    return 0;
}