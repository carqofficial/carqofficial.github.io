#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void matrix_entry(int *i, int *j, double (*mat)[*i + 2][*j + 2])
{
    int k, l;
    printf("\n");
    for (k = 0; k < *i; k++)
    {
        for (l = 0; l < *j; l++)
        {
            printf("Enter a[%d%d] element : ", k + 1, l + 1);
            scanf("%lf", &(*mat)[k][l]);
        }
    }
}

void matrix_addition(int *i, int *j, double (*mat1)[*i + 2][*j + 2], double (*mat2)[*i + 2][*j + 2], double mat_add[*i + 2][*j + 2])
{
    int k, l;
    for (k = 0; k < *i; k++)
    {
        for (l = 0; l < *j; l++)
        {
            mat_add[k][l] = (*mat1)[k][l] + (*mat2)[k][l];
        }
    }
}
int main()
{
    int i, j;
    printf("\nEnter the dimension of the matrices (in (ixj) formate : ");
    scanf("%dx%d", &i, &j);
    double mat1[i + 2][j + 2], mat2[i + 2][j + 2];
    int k, l;
    printf("\nEnter the first matrix : ");
    /*int k, l;
    printf("\n");
    for (k = 0; k < i; k++)
    {
        for (l = 0; l < j; l++)
        {
            printf("Enter a[%d%d] element : ", k + 1, l + 1);
            scanf("%lf", &mat1[k][l]);
        }
    }
    printf("\nEnter the second matrix : ");
    printf("\n");
    for (k = 0; k < i; k++)
    {
        for (l = 0; l < j; l++)
        {
            printf("Enter a[%d%d] element : ", k + 1, l + 1);
            scanf("%lf", &mat2[k][l]);
        }
    }*/
    matrix_entry(&i, &j, &mat1);
    printf("\nEnter the second matrix : ");
    matrix_entry(&i, &j, &mat2);
    double mat_add[i + 2][j + 2];
    matrix_addition(&i, &j, &mat1, &mat2, mat_add);
    printf("\n");
    for (k = 0; k < i; k++)
    {
        printf("\n");
        for (l = 0; l < j; l++)
        {
            printf("%.2lf ", mat1[k][l]);
        }
    }
    printf("\n");
    for (k = 0; k < i; k++)
    {
        printf("\n");
        for (l = 0; l < j; l++)
        {
            printf("%.2lf ", mat2[k][l]);
        }
    }
    printf("\n\nAddition of two matrices : ");
    for (k = 0; k < i; k++)
    {
        printf("\n");
        for (l = 0; l < j; l++)
        {
            printf("%.2lf ", mat_add[k][l]);
        }
    }
    printf("\n\n");
    return 0;
}