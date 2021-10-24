#include <stdio.h>

int main()
{
    int i, j, space, row;
    printf("\nEnter how many rows does you want to be printed : ");
    scanf("%d", &row);
    space = (row - 1) * 2;
    printf("\n\n");

    if (row <= 9)
    {
        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            for (j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            space -= 2;
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
