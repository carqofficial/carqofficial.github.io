#include <stdio.h>

int main()
{
    int row, col;
    printf("\nEnter the dimension of the metrix (in (ixj) formate) : ");
    scanf("%dx%d", &row, &col);
    double mat[row + 1][col + 1];

    printf("\nEnter the matix : \n");
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i + 1, j + 1);
            scanf("%lf", &mat[i][j]);
        }
    }
    double sum;
    sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j > i)
            {
                sum += mat[i][j];
            }
        }
    }
    printf("\nSum of the elements of the matrix above the main diagonal : %.2lf", sum);
    return 0;
}