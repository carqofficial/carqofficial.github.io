#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sort(int x[], int y)
{
    int min, j, k, pos;
    for (j = 0; j < (y - 1); j++)
    {
        pos = j;
        min = x[j];
        for (k = j + 1; k < y; k++)
        {
            if (x[k] < min)
            {
                pos = k;
                min = x[k];
            }
        }
        x[pos] = x[j];
        x[j] = min;
    }
}

int main()
{
    int n;
    printf("\nEnter the number of integers to be inputted : ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    system("cls");
    printf("\nSorted array : ");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf(", %d", arr[i]);
        }
    }
    printf("\n\n");
    return 0;
}