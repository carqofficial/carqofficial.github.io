#include <stdio.h>

int main()
{
    int row, i, j, space;
    printf("\nEnter how many rows you want to print : ");
    scanf("%d", &row);
    i = 1;
    printf("\n\n");
    while (i <= row)
    {
        space = 1;
        j = 1;
        while (space<(row - i+1))
        {
            printf("  ");
            space++;
        }
        while(j<(i+1))
        {
            printf("   *");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}