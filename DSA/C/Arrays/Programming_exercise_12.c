#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter the size of first array  : ");
    scanf("%d", &num1);
    printf("Enter the size of second array : ");
    scanf("%d", &num2);
    double arr1[num1 + 1], arr2[num2 + 1];

    printf("\nEnter the array1 : \n");
    int i;
    for (i = 0; i < num1; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%lf", &arr1[i]);
    }

    printf("\nEnter the array2 : \n");
    for (i = 0; i < num2; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%lf", &arr2[i]);
    }

    double arr_mrg[num1 + num2];
    for (i = 0; i < num1; i++)
    {
        arr_mrg[i] = arr1[i];
    }
    for (i = num1; i < num1 + num2; i++)
    {
        arr_mrg[i] = arr2[i - num1];
    }

    printf("\nMerged array in reversed order : ");
    for (i = num1 + num2 - 1; i >= 0; i--)
    {
        printf("%.2lf ", arr_mrg[i]);
    }
    printf("\n\n");
    return 0;
}