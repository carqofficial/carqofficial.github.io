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
    while (i < N)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    while (i > 0)
    {
        printf("%d", arr[i - 1]);
        i--;
    }
    return 0;
}