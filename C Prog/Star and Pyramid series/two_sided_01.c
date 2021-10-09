#include <stdio.h>

int main()
{
    int i, j, space, row, what_print, even_check, space_row, space_real;
    printf("\nEnter how may rows does you wan to be printed : ");
    scanf("%d", &row);
    space_row = ((row - 1) * 2);
    space_real = space_row;
    printf("\n\n");
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            even_check = (j % 2);
            if (even_check == 0)
            {
                what_print = 1;
            }
            else if (even_check != 0)
            {
                what_print = 0;
            }
            printf("%d", what_print);
        }
        for (space = 1; space <= space_real; space++)
        {
            printf(" ");
        }
        space_real -= 2;
        for (j = 1; j <= i; j++)
        {
            even_check = (j % 2);
            if (even_check == 0)
            {
                what_print = 1;
            }
            else if (even_check != 0)
            {
                what_print = 0;
            }
            printf("%d", what_print);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}