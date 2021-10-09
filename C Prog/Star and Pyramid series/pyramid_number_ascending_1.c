#include <stdio.h>

int main()
{
    int i, j, row, space, ch;
    printf("\nEnter the number of rows does you want to be printed : ");
    scanf("%d", &row);
    ch = 'A';
    printf("\n\n");
    for (i = 1; i <= row; i++)
    {
        ch = ('A' + i - 1);
        for (space = 1; space <= (row - i + 1); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch--);
        }
        ch = (ch + 1);
        printf("\b");

        for (j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}