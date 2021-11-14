#include <stdio.h>

int main()
{
    int row, i, j, checker;
    printf("\nEnter the number of the rows : ");
    scanf("%d", &row);
    checker = (row % 2);
    printf("\nPrinting the pattern : \n");
    if (checker != 0)
    {
        for (i = 1; i <= row; i++)
        {
            printf("\n                     ");
            if (i != ((row + 1) / 2))
            {
                for (j = 1; j <= row; j++)
                {
                    printf("S  ");
                }
            }
            else if (i == ((row + 1) / 2))
            {
                for (j = 1; j <= (((row + 1) / 2) - 1); j++)
                {
                    printf("S  ");
                }
                printf("O  ");
                for (j = 1; j <= (((row + 1) / 2) - 1); j++)
                {
                    printf("S  ");
                }
            }
        }
    }
    else if (checker == 0)
    {
        for (i = 1; i <= row; i++)
        {
            printf("\n                     ");
            if ((i != (row / 2)) && (i != ((row / 2) + 1)))
            {
                for (j = 1; j <= row; j++)
                {
                    printf("S  ");
                }
            }
            else if ((i == (row / 2)) || (i == ((row / 2) + 1)))
            {
                for (j = 1; j <= ((row / 2) - 1); j++)
                {
                    printf("S  ");
                }
                printf("O  O  ");
                for (j = 1; j <= ((row / 2) - 1); j++)
                {
                    printf("S  ");
                }
            }
        }
    }
    printf("\n\n");
    return 0;
}