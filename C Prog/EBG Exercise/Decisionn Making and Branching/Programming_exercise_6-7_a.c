#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i, j, PRNT, ROW, SUM;
    PRNT = 0;
    SUM = 0;
    printf("\nHow many rows do you want to print of Floyd's triangle : ");
    scanf("%d", &ROW);

    for (i = 1; i <= ROW; i++)
    {
        SUM += i;
    }
    int COUNT;
    COUNT = 0;
    while (SUM != 0)
    {
        COUNT++;
        SUM = SUM / 10;
    }
    /*printf("\nDigits numbers in last digit : %d\n", COUNT);*/
    /*printf("\nLast Number = %d", SUM);*/
    printf("\n");
    for (i = 1; i <= ROW; i++)
    {
        for (j = 1; j <= i; j++)
        {
            PRNT += 1;
            printf("%*d ", COUNT, PRNT);
            /*help --> 1. https://stackoverflow.com/questions/9937052/what-is-the-difference-between-d-and-d-in-c-language
            */
        }
        printf("\n");
    }
    printf("\n");
    printf("\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}
