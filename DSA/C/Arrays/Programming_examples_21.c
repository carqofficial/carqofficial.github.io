#include <stdio.h>

int main()
{
    int x, y;
    printf("\nEnter the dimension of the matrix (in (ixj) formate) : ");
    scanf("%dx%d", &x, &y);
    int mat[x][y], tran_mat[y][x];
    printf("\nEnter the matrix : \n");
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("Enter a[%d][%d] : ", (i + 1), (j + 1));
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            tran_mat[j][i] = mat[i][j];
        }
    }

    printf("\nTranspose of the matrix : \n");

    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("%d  ", tran_mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}