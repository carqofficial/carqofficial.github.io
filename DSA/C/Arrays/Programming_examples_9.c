#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter the number of the elements in the array : ");
    scanf("%d", &num);

    int arr[num + 1], i;
    printf("\nEnter the array :\n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("\nEnter the position from which the number has to be deleted : ");
    scanf("%d", &pos);
    for (i = pos; i < num - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    num--;
    printf("\nArray after deletation : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    return 0;
}