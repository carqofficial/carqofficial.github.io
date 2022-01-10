#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void rev(int *num, int (*arr)[*num + 2])
{
    int temp[*num + 2];
    int i;
    for (i = 0; i < *num; i++)
    {
        temp[*num - 1 - i] = (*arr)[i];
    }
    for (i = 0; i < *num; i++)
    {
        (*arr)[i] = temp[i];
    }
}

int main()
{
    int num;
    printf("\nHow many elements will contain the array : ");
    scanf("%d", &num);
    int arr[num + 2];
    int i;
    printf("\nEnter the integer array : \n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    rev(&num, &arr);
    printf("\nReversed array : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    system("cls");
    return 0;
}