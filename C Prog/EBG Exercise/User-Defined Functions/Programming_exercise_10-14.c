#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void array_taker(int n, double arr[n], int num)
{
    int j;
    printf("\nFor the array %d : \n", num);
    for (j = 0; j < n; j++)
    {
        printf("Enter element %d : ", (j + 1));
        scanf("%lf", &arr[j]);
    }
}

void selection_sort(int n, double arr[n])
{
    int j, pos, k;
    double min;
    for (j = 0; j < (n - 1); j++)
    {
        pos = j;
        min = arr[j];
        for (k = j + 1; k < n; k++)
        {
            if (arr[k] < min)
            {
                min = arr[k];
                pos = k;
            }
        }
        arr[pos] = arr[j];
        arr[j] = min;
    }
}

int main()
{
    int size1, size2;
    printf("\nEnter the size of array 1 : ");
    scanf("%d", &size1);
    printf("Enter the size of array 2 : ");
    scanf("%d", &size2);
    double arr1[1000], arr2[1000];

    int i;
    array_taker(size1, arr1, 1);
    array_taker(size2, arr2, 2);
    selection_sort(size1, arr1);
    selection_sort(size2, arr2);

    for (i = size1; i < size1 + size2; i++)
    {
        arr1[i] = arr2[i - size1];
    }
    selection_sort((size1 + size2), arr1);
    printf("\nThe array is : ");
    for (i = 0; i < size1 + size2; i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", arr1[i]);
        }
        else
        {
            printf(", %.2lf", arr1[i]);
        }
    }
    return 0;
}