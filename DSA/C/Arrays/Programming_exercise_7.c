#include <stdio.h>

int main()
{
    int row, col;
    printf("\nEnter the dimension of the matrix (in (ixj) format) : ");
    scanf("%dx%d", &row, &col);
    int mat[row + 1][col + 1];

    printf("\nEnter the matrix : \n");
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the element a[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int sum; 
    sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
        }
    }

    printf("\nSum of the diagonal elements of the matrix : %d\n\n", sum);

    return 0;
}