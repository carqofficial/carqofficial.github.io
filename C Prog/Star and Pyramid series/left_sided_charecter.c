#include <stdio.h>

int main()
{
    int i, j, row;
    char ch;
    printf("\nEnter how many rows does you want  (valid input = (1-19)): ");
    scanf("%d", &row);
    ch = 'A';
    printf("\n");
    if (row <= 19)
    {
        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%c", ch++);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wrong Input\n");
    }
    printf("\n");
    return 0;
}