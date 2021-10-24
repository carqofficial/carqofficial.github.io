#include <stdio.h>

int main()
{
    int i, j, space, row, space_real, space_raw;
    char ch;

    printf("\nEnter how many number does you want to be printed : ");
    scanf("%d", &row);
    /*space_raw = ((row - 1) * 2);
    space_real = space_raw;*/
    space = 0;
    printf("\n");

    for (i = 1; i <= (row); i++)
    {
        ch = 'A';
        for (j = 1; j <= (row - i + 1); j++)
        {
            printf("%c ", ch++);
        }

        if (i == 1)
        {
            printf("\b\b");
        }
        ch = (ch - 1);
        for (j = 1; j < space; j++)
        {
            printf("  ");
        }
        for (j = (row - i + 1); j >= 1; j--)
        {
            printf("%c ", ch--);
        }
        printf("\n");
        space += 2;
    }
    printf("\n");
    return 0;
}
