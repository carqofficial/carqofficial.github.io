#include <stdio.h>

int main()
{
    int i, j, space, row, row_raw;
    space = 1;
    printf("\nHow many rows you want : ");
    scanf("%d", &row_raw);
    row = (row_raw - 1);
    printf("\n");
    i = 1;
    while (i <= ((row * 2) + 1))
    {
        printf("*");
        i++;
    }
    i = 1;
    printf("\n");

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        space += 2;
    }
    printf("\n");
    return 0;
}