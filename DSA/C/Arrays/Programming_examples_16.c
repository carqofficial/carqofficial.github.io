#include <stdio.h>

int main()
{
    int i, space, j, row, max, count;

    printf("\nEnter the number of the rows to be printed : ");
    scanf("%d", &row);

    int num[row + 2][((row * (row + 1)) / 2) + 1];
    num[1][0] = 0;
    num[1][1] = 1;
    num[1][2] = 0;
    num[2][0] = 0;
    num[2][1] = 1;
    num[2][2] = 1;
    num[2][3] = 0;
    max = 0;
    count = 0;
    for (i = 3; i <= row; i++)
    {
        num[i][0] = 0;
        num[i][i + 1] = 0;
        for (j = 1; j <= i; j++)
        {
            num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
            max = (max > num[i][j]) ? max : num[i][j];
        }
    }

    while (max != 0)
    {
        count++;
        max /= 10;
    }

    printf("\nThe pascal's triangle : \n\n");
    for (i = 1; i <= row; i++)
    {
        for (space = 1; space <= (row - i); space++)
        {

            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%4d", num[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}