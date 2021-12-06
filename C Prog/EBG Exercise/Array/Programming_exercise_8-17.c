#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("\nEnter the array : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int checker, sum;
    sum = 0;
    for (i = 0; i <= n - 1; i++)
    {
        checker = (arr[i] % 2);
        if (checker != 0)
        {
            sum += arr[i];
        }
    }
    system("cls");
    printf("\nThe sum of the odd numers in the array : %d\n\n", sum);
    return 0;
}