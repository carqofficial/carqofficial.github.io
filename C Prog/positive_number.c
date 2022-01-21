#include <stdio.h>

int countPos(int (*arr)[], int *length, int (*newArr)[]);
int main()
{
    int arr[] = {1, 23, 4, 202, -2, -23, -221, 39};
    int length = sizeof(arr) / sizeof(arr[0]);
    int newArr[length];
    int count_positive;
    count_positive = countPos(&arr, &length, &newArr);
    printf("\n\nThe number of positive integer present in this array is %d\n\n", count_positive);
    return 0;
}

int countPos(int (*arr)[], int *length, int (*newArr)[])
{
    int newLen, count_length;
    count_length = 0;
    for (int i = 0; i < *length; i++)
    {
        if ((*arr)[i] > 0)
        {
            (*newArr)[i] = (*arr)[i];
            count_length++;
            //printf("The number of positive integer present in this array is %d", newLen);
        }
    }
    return (count_length);
}