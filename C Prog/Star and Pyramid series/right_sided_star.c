#include<stdio.h>

int main()
{
    int row, i, j;
    printf("\nEnter how many rows does you want to be printed : ");
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