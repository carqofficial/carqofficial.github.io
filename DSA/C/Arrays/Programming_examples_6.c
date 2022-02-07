#include <stdio.h>

int array_check(int *num, int (*arr)[*num + 1], int (*arr_pos)[*num + 1], int (*arr_duplicate)[*num + 1])
{
    int i, j, k;
    k = 0;
    for (i = 0; i < *num; i++)
    {
        for (j = i + 1; j < *num; j++)
        {
            if (((*arr)[i] == (*arr)[j]) && (i != j))
            {
                printf("Duplicate number found at positions %d and %d", i, j);
            }
        }
    }
    return k;
}

int main()
{
    int num;
    printf("\nEnter the size of the array : ");
    scanf("%d", &num);
    int arr[num + 1];

    int i;
    printf("\nEnter the array : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n\n");
    int arr_pos[num + 1], arr_duplicate[num + 1], k;
    k = array_check(&num, &arr, &arr_pos, &arr_duplicate);
    printf("\n\n");

    return 0;
}