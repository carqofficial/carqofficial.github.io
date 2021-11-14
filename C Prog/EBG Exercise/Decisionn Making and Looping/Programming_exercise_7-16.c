#include <stdio.h>
#include <conio.h>

int main()
{
    int row, int_print;
    char char_print;
    char_print = 'A';
    int_print = 1;
    printf("\nEnter number of rows to be printed : ");
    scanf("%d", &row);

    int i, j, k, checker, space;
    for (i = 1; i <= row; i++)
    {
        checker = (i % 2);
        if (checker != 0)
        {
            for (j = 1; j <= i; j++)
            {
                int_print++;
            }
        }
    }
    int_print = (int_print - 1);
    printf("%d", int_print);
    int count = 0;
    while (int_print != 0)
    {
        count++;
        int_print /= 10;
    }

    char_print = 'A';
    int_print = 1;

    for (i = 1; i <= row; i++)
    {
        printf("\n");
        for (space = 1; space <= (row - i + 1); space++)
        {
            printf(" ");
            for (k = 1; k <= (count - 1); k++)
            {
                printf(" ");
            }
        }
        checker = (i % 2);
        if (checker != 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", (count), int_print);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
                int_print++;
            }
        }
        else if (checker == 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%0*c ", (count), char_print);
                for (k = 1; k <= (count - 1); k++)
                {
                    printf(" ");
                }
                char_print++;
            }
        }
    }
    printf("\n\n");
    printf("Press any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}