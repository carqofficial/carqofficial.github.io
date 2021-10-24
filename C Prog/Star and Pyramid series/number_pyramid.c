#include <stdio.h>

int main()
{
    int i, j, row, j_real, space;
    printf("\nEnter how many rows does you want to be printed ( valid input = (1-5) : ");
    scanf("%d", &row);
    printf("\n\n");
    if ((row <= 5) && (row >= 1))
    {
        for (i = 1; i <= row; i++)
        {
            for (space = 1; space < (row - i + 1); space++)
            {
                printf(" ");
            }
            j_real = ((i * 2) - 1);
            for (j = 1; j <= j_real; j++)
            {
                printf("%d", j);
            }

            printf("\n");
        }
    }
    else{
        printf("Wrong Input!!");
    }
    printf("\n\n");
    return 0;
}