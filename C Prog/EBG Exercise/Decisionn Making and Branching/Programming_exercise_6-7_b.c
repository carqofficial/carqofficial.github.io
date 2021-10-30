#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i, j, PRNT, ROW;
    printf("\nHow many rows do you want to print : ");
    scanf("%d", &ROW);
    printf("\n");
    for (i = 1; i <= ROW; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((j % 2) == 0)
            {
                PRNT = 0;
            }
            else if ((j % 2) != 0)
            {
                PRNT = 1;
            }
            printf("%d ", PRNT);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}
