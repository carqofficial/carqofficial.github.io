#include<stdio.h>

int main()
{
    int row, i, j;
    printf("\nEnter how many rows you wanted to print : ");
    scanf("%d", &row);
    i = 1;
    while(i<=row)
    {
        j = 1;
        while(j<=(row-i+1))
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}