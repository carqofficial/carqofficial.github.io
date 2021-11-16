#include <stdio.h>
#include <conio.h>

int main()
{
    int row, checker_row, int_print, checker_pos, i, j;
    printf("\nEnter the number of the rows to be printed : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        printf("\n");
        checker_row = (i % 2);
        for (j = 1; j <= i; j++)
        {
            checker_pos = (j % 2);
            if (checker_row != 0)
            {
                if (checker_pos != 0)
                {
                    printf("1 ");
                }
                else if (checker_pos == 0)
                {
                    printf("0 ");
                }
            }
            else if (checker_row == 0)
            {
                if (checker_pos != 0)
                {
                    printf("0 ");
                }
                else if (checker_pos == 0)
                {
                    printf("1 ");
                }
            }
        }
    }
    printf("\n\n");
    printf("\nPress any key to exit.....");
    getch();
    printf("\n\n");
}