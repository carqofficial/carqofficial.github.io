#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter the number of elements in the array : ");
    int arr[num + 2];
    printf("\nEnter the array (in ascending order) : \n");
    int i;
    for (i = 0; i < num; i++)
    {
        printf("\nEnter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int insert_num;
    printf("\nEnter the number to be inserted : ");
    scanf("%d", &insert_num);
    int insert_pos, ref_temp;
    ref_temp = arr[0];
    for (i = 1; i < num; i++)
    {
        if ((arr[i] > ref_temp) && (arr[i] < insert_num))
        {
            ref_temp = arr[i];
            insert_pos = i;
        }
    }

    for (i = num - 1; i >= insert_pos - 1; i++)
    {
        arr[i + 1] = arr[i];
    }

    arr[insert_pos - 1] = insert_num;

    printf("\nPrinting the array : ");
    for (i = 0; i <= num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}