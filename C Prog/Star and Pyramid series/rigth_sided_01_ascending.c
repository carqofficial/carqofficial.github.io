#include <stdio.h>

int main()
{
    int i, j, space, row, even_check, what_print;
    printf("\nEnter how many lines does you want to be printed : ");
    scanf("%d", &row);
    i = 1;
    printf("\n");
    printf("\n");
    printf("\nPrinting the pattern : ");

    while (i <= row)
    {
        space = 1;
        j = 1;
        while (space <= (row - i + 1))
        {
            printf("  ");
            space++;
        }
        while (j <= i)
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
            printf("%d ", what_print);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}