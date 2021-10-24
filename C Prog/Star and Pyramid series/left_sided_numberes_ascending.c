#include <stdio.h>

int main()
{
    int i, j, row;
    printf("\nEnter how many rows does you want to be printed ( valid input = (1-9) ): ");
    scanf("%d", &row);
    printf("\n\n");
    if ((row <= 9) && (row>=1))
    {
        for (i = row; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Input!!");
    }

    printf("\n\n");
    return 0;
}