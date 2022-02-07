#include <stdio.h>

int isUpperTriangle(int *row, double (*mat)[*row + 1][*row + 1])
{
    int i, j, count_lower, count_upper, max_up, max_low;
    count_lower = 0;
    count_upper = 0;
    max_low = (((*row) * ((*row) + 1)) / 2);
    max_up = (((*row) * (*row)) - max_low);
    /*printf("max_up --> %d", max_up);*/
    /*printf("max_low --> %d", max_low);*/
    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *row; j++)
        {
            if (i >= j)
            {
                if ((*mat)[i][j] == 0)
                {
                    count_lower++;
                }
            }
            else if (i < j)
            {
                if ((*mat)[i][j] != 0)
                {
                    count_upper++;
                }
            }
        }
    }
    /*printf("count_up --> %d", count_upper);*/
    /*printf("count_low --> %d", count_lower);*/
    if ((count_lower == max_low) && (count_upper == max_up))
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
    ret = isUpperTriangle(&row, &mat);
    printf("\nreturn : %d\n\n", ret);

    return 0;
}