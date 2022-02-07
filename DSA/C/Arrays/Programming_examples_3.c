#include <stdio.h>

int small_position(int *num, int (*arr)[*num + 1], int *small_num)
{
    int small_pos, i, j;
    *small_num = (*arr)[0];
    small_pos = 0;
    for (i = 1; i < *num; i++)
    {
        if ((*arr)[i] < *small_num)
        {
            small_pos = i;
            *small_num = (*arr)[i];
        }
    }
    return (small_pos);
}

int main()
{
    int num;
    printf("\nEnter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num + 1], i;
    printf("\nEnter the array : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int small_num, small_pos;
    small_pos = small_position(&num, &arr, &small_num);
    printf("\nSmallest element in the array : %d", small_num);
    printf("\nPosition of the smallest element : %d\n\n", small_pos + 1);
    return 0;
}