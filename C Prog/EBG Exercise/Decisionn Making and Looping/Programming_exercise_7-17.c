#include <stdio.h>
#include <conio.h>

int main()
{
    int row, i, checker_row, j, int_print, space;
    printf("\nEnter the number of the rows to be printed : ");
    scanf("%d", &row);
    int digi_check, k, count = 0;
    digi_check = (row / 2);
    while (digi_check != 0)
    {
        count++;
        digi_check /= 10;
    }
    checker_row = (row % 2);
    if (checker_row != 0)
    {
        for (i = 1; i <= (row + 1) / 2; i++)
        {
            printf("\n");
            for (space = 1; space <= (row - i - 2); space++)
            {
                printf("  ");
                for (k = 1; k <= (count - 1); k++)
                {
                    printf("  ");
                }
            }
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
            for (j = (i - 1); j >= 1; j--)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
        }
        for (i = (((row + 1) / 2) - 1); i >= 1; i--)
        {
            printf("\n");
            for (space = 1; space <= (row - i - 2); space++)
            {
                printf("  ");
                for (k = 1; k <= (count - 1); k++)
                {
                    printf("  ");
                }
            }
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
            for (j = (i - 1); j >= 1; j--)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
        }
    }
    else if (checker_row == 0)
    {
        for (i = 1; i <= (row / 2); i++)
        {
            printf("\n");
            for (space = 1; space <= (row - i - 2); space++)
            {
                printf("  ");
                for (k = 1; k <= (count - 1); k++)
                {
                    printf("  ");
                }
            }
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
            for (j = (i - 1); j >= 1; j--)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
        }
        for (i = (row / 2); i >= 1; i--)
        {
            printf("\n");
            for (space = 1; space <= (row - i - 2); space++)
            {
                printf("  ");
                for (k = 1; k <= (count - 1); k++)
                {
                    printf("  ");
                }
            }
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
            for (j = (i - 1); j >= 1; j--)
            {
                printf("%0*d ", count, j);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
            }
        }
    }
    printf("\n\n");
    printf("\nPress any key key to exit....");
    getch();
    printf("\n\n");
    return 0;
}