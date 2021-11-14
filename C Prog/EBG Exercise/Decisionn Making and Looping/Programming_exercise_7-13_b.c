#include <stdio.h>

int main()
{
    int row, i, j;
    printf("\nEnter the number of the rows to be printed : ");
    scanf("%d", &row);
    printf("\nPrinting the pattern : \n");
    for (i = 1; i <= row; i++)
    {
        printf("\n                   ");
        if ((i == 1) || (i == row))
        {
            for (j = 1; j <= row; j++)
            {
                printf("S  ");
            }
        }
        else
        {
            for (j = 1; j <= row; j++)
            {
                if ((j == 1) || (j == row))
                {
                    printf("S  ");
                }
                else
                {
                    printf("   ");
                }
            }
        }
    }
    printf("\n\n");
    return 0;
}