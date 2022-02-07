#include <stdio.h>

int pair_fifty(int (*num)[101], int (*pair)[6000][2])
{
    int i, j, k;
    k = 0;
    for (i = 0; i < 99; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if ((*num)[i] + (*num)[j] == 50)
            {
                (*pair)[k][0] = (*num)[i];
                (*pair)[k][1] = (*num)[j];
                k++;
            }
        }
    }
    return (k);
}

int main()
{
    int num[101], i, pair[6000][2];
    printf("\nEnter the numbers : \n");
    for (i = 0; i < 100; i++)
    {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    int k;
    k = pair_fifty(&num, &pair);
    printf("\nPairs are : ");
    for (i = 0; i < k; i++)
    {
        if(i == 0)
        {
        printf("(%d, %d)", pair[i][0], pair[i][1]);
        }
        else
        {
            printf(", (%d, %d)", pair[i][0], pair[i][1]);
        }
    }
    printf("\n\n"); 
    return 0;
}