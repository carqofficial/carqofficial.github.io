#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, j, space, even_check, pat_check, row_mod, row_raw;
    int k;
    printf("\nEnter how many rows does you want(even inputs be converted to odd ) : ");
    scanf("%d", &row);
    i = 1;
    /*row = (row_raw + 1);*/
    even_check = (row % 2);
    printf("\n\n");

    //for even row
    /*if (even_check == 0)
    {*/
    if (even_check == 0)
    {
        while (i <= row)
        {
            space = 1;
            j = 1;
            pat_check = (row / 2);
            if (pat_check > i)
            {
                while (space <= (pat_check - i))
                {
                    printf("  ");
                    space++;
                }
                while (j <= i)
                {
                    printf("   *");
                    j++;
                }
            }
            else if (pat_check < i)
            {
                while (space <= (i - pat_check))
                {
                    printf("  ");
                    space++;
                }
                while (j <= (row - i))
                {
                    printf("   *");
                    j++;
                }
            }

            else if (pat_check = i)
            {
                while (space <= pat_check - i)
                {
                    printf("  ");
                    space++;
                }
                while (j <= (row - i))
                {
                    printf("   *");
                    j++;
                }
            }
            printf("\n");
            i++;
        }
        exit(0);
        printf("\n\n");
    }
    /*}*/

    //for odd row
    /*else if (even_check != 0)*/

    if (even_check != 0)
    {
        while (i <= row)
        {
            row_mod = row + 1;
            space = 1;
            j = 1;
            pat_check = (row_mod / 2);
            if (pat_check > i)
            {
                while (space <= (pat_check - i))
                {
                    printf("  ");
                    space++;
                }
                while (j <= i)
                {
                    printf("   *");
                    j++;
                }
            }
            else if (pat_check < i)
            {
                while (space <= (i - pat_check))
                {
                    printf("  ");
                    space++;
                }
                while (j <= (row_mod - i))
                {
                    printf("   *");
                    j++;
                }
            }

            else if (pat_check = i)
            {
                while (space <= pat_check - i)
                {
                    printf("  ");
                    space++;
                }
                while (j <= (row_mod - i))
                {
                    printf("   *");
                    j++;
                }
            }
            printf("\n");
            i++;
        }
        printf("\n\n");
        exit(0);
        
    }

    return 0;
}
