#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sort(int *num, int (*arr)[*num + 2])
{
    int min, pos_min, temp;
    int i, j;
    for (i = 0; i < (*num - 1); i++)
    {
        min = (*arr)[i];
        pos_min = i;
        for (j = i + 1; j < *num; j++)
        {
            if ((*arr)[j] < min)
            {
                pos_min = j;
                min = (*arr)[j];
            }
        }
        (*arr)[pos_min] = (*arr)[i];
        (*arr)[i] = min;
    }
}
void add_int(int *num, int *add_num, int (*arr)[*num + 2])
{
    (*arr)[*num] = *add_num;
}

int main()
{
    int num;
    printf("\nHow many numbers will be entered : ");
    scanf("%d", &num);
    int arr[num + 2];
    int i;
    for (i = 0; i < num; i++)
    {
        if (i == 0)
        {
            printf("Enter the 1st number : ");
            scanf("%d", &arr[i]);
        }
        else if (i == 1)
        {
            printf("Enter the 2nd number : ");
            scanf("%d", &arr[i]);
        }
        else if (i == 2)
        {
            printf("Enter the 3rd number : ");
            scanf("%d", &arr[i]);
        }
        else if (i >= 3)
        {
            printf("Enter the %dth number : ", (i + 1));
            scanf("%d", &arr[i]);
        }
    }
    sort(&num, &arr);
    printf("\nSorted array : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    int add_num;
    printf("\nEnter the number to  be added : ");
    scanf("%d", &add_num);
    add_int(&num, &add_num, &arr);
    num += 1;
    sort(&num, &arr);
    printf("\nSorted array after adding number : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}