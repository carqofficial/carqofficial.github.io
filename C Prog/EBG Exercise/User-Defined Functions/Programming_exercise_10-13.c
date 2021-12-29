#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

double row_avg(int m, int n, double MAT[m][n], int out_x)
{
    int k, l;
    double row_average[m];

    for (k = 1; k <= m; k++)
    {
        row_average[k] = 0;
        for (l = 1; l <= n; l++)
        {
            row_average[k] += MAT[k][l];
        }
    }
    return ((row_average[out_x] / n));
}

double column_avg(int m, int n, double MAT[m][n], int out_y)
{
    int k, l;
    double column_average[m];

    for (k = 1; k <= n; k++)
    {
        column_average[k] = 0;
        for (l = 1; l <= m; l++)
        {
            column_average[k] += MAT[l][k];
        }
    }
    return ((column_average[out_y] / m));
}
int count_dig(double num)
{
    int num_int;
    num_int = (int)num;
    int count;
    count = 0;
    while (num_int != 0)
    {
        count++;
        num_int /= 10;
    }
    return (count);
}

int main()
{
    int x, y;
    printf("\nEnter the size of the matrix (in ixj formate) : ");
    scanf("%dx%d", &x, &y);
    double a[x][y], max;
    int i, j;
    max = 0;
    system("cls");
    for (i = 1; i <= x; i++)
    {
        printf("\nFor row %d : \n", i);
        for (j = 1; j <= y; j++)
        {
            printf("Enter the a[%d%d] element : ", i, j);
            scanf("%lf", &a[i][j]);
            max = (max > a[i][j]) ? max : a[i][j];
        }
    }
    int space;
    space = count_dig(max);
    system("cls");
    printf("\nThe matrix with row and column average : ");
    for (i = 1; i <= x; i++)
    {
        printf(" | ");
        for (j = 1; j <= y; j++)
        {
            printf("%*.2lf", (space + 5), a[i][j]);
        }
        printf(" | ");
        printf("%*.2lf", (space + 5), row_avg(x, y, a, i));
        printf("\n                                         ");
    }
    /*printf("\nThe matrix with row and column average : ");*/
    printf("\n                                            ");
    for (i = 1; i <= y; i++)
    {
        printf("%*.2lf", (space + 5), column_avg(x, y, a, i));
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    system("cls");
    return 0;
}