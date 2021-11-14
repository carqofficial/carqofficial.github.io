#include <stdio.h>

int main()
{
    int row, i, j;
    printf("\nEnter number of the rows to be printed : ");
    scanf("%d", &row);
    printf("\nPrinting the pattern : \n");
    for (i = 1; i <= row; i++)
    {
        printf("\n                                      ");
        for (j = 1; j <= row; j++)
        {
            printf("S  ");
        }
    }
    printf("\n\n");

    return 0;
}