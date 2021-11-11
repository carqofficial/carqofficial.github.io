#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, n_sam;
    printf("\nEnter the number of the rows to be printed : ");
    scanf("%d", &n);
    n_sam = n;
    int count = 0;
    while (n_sam != 0)
    {
        count++;
        n_sam /= 10;
    }
    printf("\nPrinting the pattern : \n");
    int ZERO, j;
    if (count > 1)
    {

        printf("\n0");

        for (i = 1; i <= n; i++)
        {
            printf("\n");
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, i);
            }
        }
    }
    else if (count == 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("\n");
            for (j = 1; j <= i; j++)
            {
                printf("%0*d ", count, i);
            }
        }
    }
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}