#include <stdio.h>

int largest_ele(int *num, int (*arr)[*num + 1], int *largest)
{
    int largest_pos;
    *largest = (*arr)[0];
    largest_pos = 0;
    int i;
    for (i = 1; i < *num; i++)
    {
        if ((*arr)[i] > *largest)
        {
            *largest = (*arr)[i];
            largest_pos = i;
        }
    }
    return (largest_pos);
}
int sec_largest_ele(int *num, int (*arr)[*num + 1], int *sec_largest, int *largest)
{
    int sec_largest_pos;
    *sec_largest = (*arr)[0];
    sec_largest_pos = 0;
    int i;
    for (i = 0; i < *num; i++)
    {
        if (((*arr)[i] > *sec_largest) && ((*arr)[i] < *largest))
        {
            *sec_largest = (*arr)[i];
            sec_largest_pos = i;
        }
        else if (*sec_largest == *largest)
        {
            *sec_largest = 0;
        }
    }
    return (sec_largest_pos);
}

int main()
{
    int num;
    printf("\nEnter the number of the elements in the array : ");
    scanf("%d", &num);
    int arr[num + 1];

    printf("\nEnter the array : \n");
    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int largest, largest_pos;
    largest_pos = largest_ele(&num, &arr, &largest);

    int sec_largest, sec_largest_pos;
    sec_largest_pos = sec_largest_ele(&num, &arr, &sec_largest, &largest);
    printf("\nSecond largest number : %d", sec_largest);
    printf("\nPosition of second largest number : %d\n\n", sec_largest_pos + 1);

    return 0;
}