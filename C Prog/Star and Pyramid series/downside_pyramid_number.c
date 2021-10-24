#include <stdio.h>

int main()
{
    int i, j, row, space;
    printf("\nEnter the number of rows ( valid input = (1-9)) : ");
    scanf("%d", &row);
    printf("\n");
    if (row <= 9)
    {
        for (i = row; i >= 0; i--)
        {
            for (space = 1; space <= (row - i + 1); space++)
            {
                printf("  ");
            }
            for (j = 1; j < i; j++)
            {
                printf("%d ", j);
            }
            for (j = i; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Input\n");
    }
    printf("\n");
    return 0;
}