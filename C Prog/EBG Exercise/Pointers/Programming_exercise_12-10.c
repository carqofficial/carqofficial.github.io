#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void array_entry(int *num, int (*arr)[*num + 2])
{
    int i;
    printf("\n");
    for (i = 0; i < *num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
int array_cmp(int *num, int (*arr1)[*num + 2], int (*arr2)[*num + 2])
{
    int i, count, ret;
    count = 0;
    for (i = 0; i < *num; i++)
    {
        if ((*arr1)[i] == (*arr2)[i])
        {
            count++;
        }
    }
    if (count == *num)
    {
        ret = 1;
    }
    else
    {
        ret = 0;
    }
    return (ret);
}

int main()
{
    int num;
    printf("\nHow many elements will contain the array : ");
    scanf("%d", &num);
    int arr1[num + 2], arr2[num + 2];
    printf("\nEnter the integer array 1 : ");
    array_entry(&num, &arr1);
    printf("\nEnter the integer array 2 : ");
    array_entry(&num, &arr2);
    int match_index;
    match_index = array_cmp(&num, &arr1, &arr2);
    if (match_index == 1)
    {
        printf("\nTwo arrays are identical.");
    }
    else
    {
        printf("\nTwo arrays are not identical.");
    }
    printf("\n\n");
    return 0;
}