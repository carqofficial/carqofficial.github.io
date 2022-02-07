#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter the number of rows of the square matrix : ");
    scanf("%d", &x);

    int i, j, mat[x + 1][x + 1];
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            else if (j > i)
            {
                mat[i][j] = 1;
            }
            else if (j < i)
            {
                mat[i][j] = -1;
            }
        }
    }

    printf("\nThe matrix is : \n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("%2d  ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}