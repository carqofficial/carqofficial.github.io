#include <stdio.h>

void del_Dup(int *num, int (*arr)[*num + 1])
{
    int temp, i, j, count, l;
    count = 0;
    for (i = 0; i < *num - 1; i++)
    {
        temp = (*arr)[i];
        int k;
        for (j = i + 1; j < *num; j++)
        {
            /*printf("%d ", (*arr)[j]);*/
            if ((*arr)[j] == (*arr)[i])
            {
                count++;
            }
        }
    }
    for (l = 0; l < count; l++)
    {
        for (i = 0; i < *num - 1; i++)
        {
            temp = (*arr)[i];
            int k;
            for (j = i + 1; j < *num; j++)
            {
                /*printf("\nj - %d ", (*arr)[j]);*/
                /*printf("\ni - %d ", (*arr)[i]);*/
                if ((*arr)[i] == (*arr)[j])
                {
                    /*printf("\nEntered : ");*/
                    if (j != ((*num) - 1))
                    {
                        /*printf("\nEntered : j!");*/
                        for (k = j; k < ((*num) - 1); k++)
                        {
                            (*arr)[k] = (*arr)[k + 1];
                        }
                        (*num)--;
                        /*printf("%d ", *num);*/
                    }
                    else if (j == ((*num) - 1))
                    {
                        /*printf("\nEntered : j");*/
                        (*num)--;
                        /*printf("%d ", *num);*/
                    }
                }
            }
        }
    }
}

int main()
{
    int num;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &num);

    int arr[num + 1];
    int i;
    printf("\nEnter the array : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    del_Dup(&num, &arr);
    printf("\nArray after deleting the dupicate elements : \n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    return 0;
}