#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*int arr1[] = {1, 2, 5, 11, 14, 7, 8, 9}, arr2[] = {0, 12, 3, 2, 6, 9, 20, 5};*/
    int n1, n2;
    printf("\nEnter the size of the first array : ");
    scanf("%d", &n1);
    printf("Enter the size of the second array : ");
    scanf("%d", &n2);
    system("cls");
    double arr1[n1 + 1], arr2[n2 + 1];
    double arrsum[8];
    int MAX;
    MAX = (n1 >= n2) ? n1 : n2;
    int i;
    i = 0;

    for (i = 0; i <= (MAX - 1); i++)
    {
        arr1[i] = 0;
    }
    for (i = 0; i <= (MAX - 1); i++)
    {
        arr2[i] = 0;
    }

    /*printf("\n----------------");
    printf("\nThe first array : { ");
    for (i = 0; i <= (n1 - 1); i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arr1[i]);
        }
        else if (i != 0)
        {
            printf(", %.2lf", arr1[i]);
        }
    }
    printf(" }");
    printf("\n----------------\n");
    printf("\n-----------------");
    printf("\nThe second array : { ");
    for (i = 0; i <= (n1 - 1); i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arr2[i]);
        }
        else if (i != 0)
        {
            printf(", %.2lf", arr2[i]);
        }
    }
    printf(" }");
    printf("\n-----------------\n");
    */
    printf("\nEnter the first array (with a space between two elements) : ");
    for (i = 0; i <= (n1 - 1); i++)
    {
        scanf("%lf", &arr1[i]);
    }
    printf("\nEnter the second array (with a space between two elements) : ");
    for (i = 0; i <= (n2 - 1); i++)
    {
        scanf("%lf", &arr2[i]);
    }
    if (n1 > n2)
    {
        for (i = n2; i <= MAX - 1; i++)
        {
            arr2[i] = 0;
        }
    }
    if (n2 > n1)
    {
        for (i = n1; i <= MAX - 1; i++)
        {
            arr1[i] = 0;
        }
    }
    system("cls");
    printf("\n----------------");
    printf("\nThe first array : { ");
    for (i = 0; i <= (n1 - 1); i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arr1[i]);
        }
        else if (i != 0)
        {
            printf(", %.2lf", arr1[i]);
        }
    }
    printf(" }");
    printf("\n----------------\n");
    printf("\n-----------------");
    printf("\nThe second array : { ");
    for (i = 0; i <= (n2 - 1); i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arr2[i]);
        }
        else if (i != 0)
        {
            printf(", %.2lf", arr2[i]);
        }
    }
    printf(" }");
    printf("\n-----------------\n");
    for (i = 0; i <= (MAX - 1); i++)
    {
        arrsum[i] = (arr1[i] + arr2[i]);
    }
    printf("\n--------------------------------------");
    printf("\nThe array of the sum of the two array : { ");
    for (i = 0; i <= (MAX - 1); i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arrsum[i]);
        }
        else if (i != 0)
        {
            printf(", %.2lf", arrsum[i]);
        }
    }
    printf(" }");
    printf("\n--------------------------------------\n\n");
    return 0;
}