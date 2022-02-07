#include <stdio.h>

int main()
{
    int i;
    int num1, num2;
    printf("\nEnter the number of the elements of the array1 (in ascending order) : ");
    scanf("%d", &num1);

    int arr1[num1 + 1];
    printf("\nEnter the array1 : \n");
    for (i = 0; i < num1; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the number of the elements of the array2 (in ascending order) : ");
    scanf("%d", &num2);

    int arr2[num2 + 1];
    printf("\nEnter the array2 : \n");
    for (i = 0; i < num2; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int arr3[num1 + num2 + 1];
    for (i = 0; i < num1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (i = num1; i < num1 + num2; i++)
    {
        arr3[i] = arr2[i - num1];
    }

    int min, min_pos, temp, j;

    for (i = 0; i < num1 + num2 - 1; i++)
    {
        for(j = 0; j < num1 + num2 - i - 1; j++)
        {
            if(arr3[j] > arr3[j + 1])
            {
                temp = arr3[j + 1];
                arr3[j + 1] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("\nArray after merging : ");
    for (i = 0; i < num1 + num2; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");
    return 0;
}