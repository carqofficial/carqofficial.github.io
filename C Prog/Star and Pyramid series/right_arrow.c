#include <stdio.h>

int main()
{
    int i, j, row, space, even_check;
    printf("\nEnter the number of rows does you want to be printed : ");
    scanf("%d", &row);
    even_check = (row % 2);
    printf("\n");

    if (even_check == 0)
    {
        for (i = 1; i <= (row / 2); i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = (row / 2); i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (even_check != 0)
    {
        for (i = 1; i <= ((row - 1) / 2); i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = ((row + 1) / 2); i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}