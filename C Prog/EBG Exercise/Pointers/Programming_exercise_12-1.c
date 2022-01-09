#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num;
    printf("\nHow many numbers shall be entered : ");
    scanf("%d", &num);
    int *ptr, arr[num];
    printf("\n");
    int i;
    for (i = 0; i < num; i++)
    {
        if (i == 0)
        {
            printf("Enter the 1st number : ");
            scanf("%d", &arr[i]);
        }
        else if (i == 1)
        {
            printf("Enter the 2nd number : ");
            scanf("%d", &arr[i]);
        }
        else if (i == 2)
        {
            printf("Enter the 3rd number : ");
            scanf("%d", &arr[i]);
        }
        else if (i >= 3)
        {
            printf("Enter the %dth number : ", (i + 1));
            scanf("%d", &arr[i]);
        }
    }
    ptr = arr;
    ptr = ptr + (num - 1);
    for (i = (num - 1); i >= 0; i--)
    {
        printf("\nNumber %d : %d", (i + 1), *ptr);
        ptr--;
    }
    return 0;
}