#include <stdio.h>

int main()
{
    int i, j, row, space, ch;
    printf("\nEnter how many rows does you want to be printed : ");
    scanf("%d", &row);
    printf("\n");

    for (i = 1; i <= row; i++)
    {
        ch = 'A';
        for (space = 1; space <= (row - i + 1); space++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        printf("\b\b");
        ch = (ch - 1);
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch--);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}