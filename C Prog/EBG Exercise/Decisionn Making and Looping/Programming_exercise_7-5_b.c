#include <stdio.h>

int main()
{
    int i, n, space, j;
    printf("\nEnter the number of rows to be printed : ");
    scanf("%d", &n);
    printf("\nPrinting the pattern  : ");
    printf("\n------------------------");
    printf("\n\n");
    for (i = n; i >= 1; i--)
    {
        for (space = 1; space <= (n - i + 1); space++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}