#include <stdio.h>

int main()
{
    int i, j, space, num = 1, row;
    printf("\nEnter how many rows you want : ");
    scanf("%d", &row);
    printf("\n");
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
                num = num * (i - j + 1) / j;
            }
            printf("%4d", num);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}