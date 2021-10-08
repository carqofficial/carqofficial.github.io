//help from https://www.w3resource.com/c-programming-exercises/for-loop/c-for-loop-exercises-33.php
#include <stdio.h>

int main()
{
    int i, space, j, row, num = 1;
    printf("\nHow many rows you want : ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
    {
        for (space = 1; space <= (row - i); space++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                num = 1;
            }
            else
            {
                num = num*(i - j + 1) / j;
            }
            printf("%4d", num);
        }
        printf("\n");
    }
    return 0;
}

