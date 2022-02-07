#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1, col1, row2, col2;
START:
    printf("\nEnter the dimension of matrix1 (in (ixj) formate) : ");
    scanf("%dx%d", &row1, &col1);
    printf("\nEnter the dimension of matrix2 (in (ixj) formate) : ");
    scanf("%dx%d", &row2, &col2);
    if (col1 != row2)
    {
        printf("\nMultiplication of this two matrices cann't be proceeded.");
        exit(0);
    }
    int mat1[row1][col1], mat2[row2][col2], i, j, mat_mul[row1][col2];

    printf("\nEnter the matrix1 : \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("a1[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the matrix2 : \n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("a2[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    int k;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            mat_mul[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                mat_mul[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }

    printf("\nMatrix of the product of the two matrices : \n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d  ", mat_mul[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}