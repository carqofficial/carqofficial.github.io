#include <stdio.h>

int main()
{
    int num;
    printf("\nEntert the number of elements in the array : ");
    scanf("%d", &num);
    int array[num + 2];

    printf("\nEnter the array : \n");
    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    int insrt_num, insrt_pos;
    printf("\nEnter the number to be inserted : ");
    scanf("%d", &insrt_num);
    printf("Enter the position to insert the number : ");
    scanf("%d", &insrt_pos);
    for (i = num - 1; i >= insrt_pos - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[insrt_pos - 1] = insrt_num;

    printf("\nPrinting the array : ");
    for (i = 0; i <= num; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    return 0;
}