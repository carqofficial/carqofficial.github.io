#include <stdio.h>

int countPos(int (*arr)[], int *length, int (*newArr)[]);
int main()
{
    int arr[] = {1, 23, 4, 202, -2, -23, -221, 39};
    int length = sizeof(arr) / sizeof(arr[0]);
    int newArr[length];
    int count_positive;
    count_positive = countPos(&arr, &length, &newArr);
    printf("\n\nThe number of positive integer present in this array is %d", count_positive);
    printf("\nPositive integers are : ");
    for (int i = 0; i < count_positive; i++)
    {

        printf("%d ", newArr[i]);
    }
    printf("\n\n");
    return 0;
}

int countPos(int (*arr)[], int *length, int (*newArr)[])
{
    int newLen, count_length, j;
    j = 0;
    count_length = 0;
    for (int i = 0; i < *length; i++)
    {
        if ((*arr)[i] > 0)
        {
            //printf("\n%d", (*arr)[i]);
            (*newArr)[j] = (*arr)[i];
            //printf("\n%d", (*newArr)[i]);
            count_length++;
            //printf("The number of positive integer present in this array is %d", newLen);
            j++;
        }
    }
    return (count_length);
}