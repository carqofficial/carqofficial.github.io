#include <stdio.h>

int isSymmetric(int *row, double (*mat)[*row + 1][*row + 1])
{
    int i, j, count_sym, max_sym;
    count_sym = 0;
    max_sym = ((*row) * ((*row) - 1));
    /*printf("max_sym --> %d", max_sym);*/
    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *row; j++)
        {
            if (i != j)
            {
                if ((*mat)[i][j] == (*mat)[j][i])
                {
                    count_sym++;
                }
            }
        }
    }
    /*printf("count_sym --> %d", count_sym);*/
    if (count_sym == max_sym)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main()
{
    int row;
    printf("\nEnter the number of the rows of the metrix  : ");
    scanf("%d", &row);
    double mat[row + 1][row + 1];

    printf("\nEnter the matrix : \n");
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("Enter a[%d][%d] : ", i + 1, j + 1);
            scanf("%lf", &mat[i][j]);
        }
    }
    int ret;
    ret = isSymmetric(&row, &mat);
    printf("\nreturn : %d\n\n", ret);

    return 0;
}