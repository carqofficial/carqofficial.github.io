#include <stdio.h>

int main()
{
    int ROW, i, j, space;
    printf("\nEnter the number of the rows : ");
    scanf("%d", &ROW);

    printf("\n");
    for (i = 0; i < ROW; i++)
    {
        for (space = 1; space <= (ROW - i - 1); space++)
        {
            printf("  ");
        }
        for (j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}