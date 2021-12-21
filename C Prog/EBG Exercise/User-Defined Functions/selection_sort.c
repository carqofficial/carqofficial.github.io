#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selection_sort(double x[], int y)
{
    int j;
    int k;
    int pos;
    double MIN, temp;
    for (j = 0; j < (y - 1); j++)
    {
        pos = j;
        MIN = x[j];
        for (k = (j + 1); k < y; k++)
        {
            if (x[k] < MIN)
            {
                MIN = x[k];
                pos = k;
            }
        }
        x[pos] = x[j];
        x[j] = MIN;
    }
}

int main()
{
    int n;
    printf("\nEnter the numbers of the numbers to be inputted : ");
    scanf("%d", &n);
    double number[n + 1];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter A[%d] : ", (i + 1));
        scanf("%lf", &number[i]);
    }
    selection_sort(number, n);
    system("cls");
    printf("\n\nSorted list : ");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%.2lf ", number[i]);
        }
        else
        {
            printf(", %.2lf", number[i]);
        }
    }
    printf("\n\n");
    return 0;
}