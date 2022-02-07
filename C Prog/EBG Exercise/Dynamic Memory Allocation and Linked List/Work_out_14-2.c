#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num, *freq, i, size;
    printf("\nEnter the size of the list : ");
    scanf("%d", &size);
    num = (int *)malloc(size * sizeof(int));
    printf("\nEnter the number : ");
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the num[%d] : ", i);
        scanf("%d", &num[i]);

        if (num[i] < 0 || num[i] > 4)
        {
            printf("\nNumber should be within range (0 - 4)");
            i--;
            continue;
        }
    }
    freq = (int *)calloc(5, sizeof(int));
    for (i = 0; i < size; i++)
    {
        freq[num[i]]++;
        printf("\nThe frequencies of the numbers are : ");
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nfreq[%d] = %d", i, freq[i]);
    }
    return 0;
}