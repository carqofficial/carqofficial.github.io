#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int N;
    printf("\nEnter the input : ");
    scanf("%d", &N);
    int arr[N];
    int i;
    i = 0;
    printf("\nEnter the array (enter space between every input) : ");
    while (i < N)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("\nThe reversed array : ");
    for (i = (N - 1); i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}