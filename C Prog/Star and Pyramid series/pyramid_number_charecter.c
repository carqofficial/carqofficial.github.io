#include<stdio.h>

int main()
{
    int num, i, j, row, ch;
    printf("\nEnter how many rows does you want to be printed : ");
    scanf("%d", &row);

    printf("\n\n");
    for(i = row; i >=1; i--)
    {
        ch = 'A';
        num = 1;
        for( j = 1; j <= i; j++)
        {
            printf("%d%c", num++, ch ++);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}