#include <stdio.h>

int main()
{
    int ROWS, i, j, PRNT;
    printf("\nHow many rows do you want : ");
    scanf("%d", &ROWS);

    printf("\n");

    for (i = 1; i <= ROWS; i++)
    {
        PRNT = 1;
        for (j = i; j <= ROWS; j++)
        {
            printf("%d ", PRNT);
            PRNT += 1;
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}