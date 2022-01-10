#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter the numbers of elements present in the integer array : ");
    scanf("%d", &num);
    int arr[num + 2];
    int i;
    printf("\nEnter the integer array : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i+ 1);
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = arr;
    for (i = 0; i < num; i++)
    {
        printf("\nAddress of %d : %u", *ptr, ptr);
        ptr++;
    }
    printf("\n\n");
    return 0;
}