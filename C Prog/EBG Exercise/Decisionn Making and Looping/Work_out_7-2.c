#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int row, column, num, MAX_COL, MAX_ROW, MAX;
start:
    printf("\nMaximum number of columns : ");
    scanf("%d", &MAX_COL);
    printf("Maximum number of rows    : ");
    scanf("%d", &MAX_ROW);

    MAX = (MAX_COL * MAX_ROW);
    int count = 0;
    while (MAX != 0)
    {
        count++;
        MAX /= 10;
    }

    row = 1;
    printf("\n\nMULTIPLICATION TABLE\n");

    int dash = 1;

    printf("\n");
    printf("----");
    do
    {
        printf("-------");
        dash++;
    } while (dash < MAX_COL);
    printf("\n\n");

    do
    {
        column = 1;
        do
        {
            num = (row * column);
            printf("%0*d    ", count, num);
            column++;
        } while (column <= MAX_COL);
        printf("\n\n");
        row++;
    } while (row <= MAX_ROW);

    int dash1 = 1;
    printf("----");
    do
    {
        printf("-------");
        dash1++;
    } while (dash1 < MAX_COL);
    printf("\n");

    char choice[500];
WRN_CH:
    printf("\nDo you want to start the  program again?(yes/no) : ");
    scanf(" %[^\n]%*c", &choice);

    if (((strcmp(choice, "Yes")) == 0) || ((strcmp(choice, "yes")) == 0) || ((strcmp(choice, "YES")) == 0) || ((strcmp(choice, "y") == 0)) || ((strcmp(choice, "Y")) == 0))
    {
        goto start;
    }
    else if (((strcmp(choice, "NO")) == 0) || ((strcmp(choice, "No")) == 0) || ((strcmp(choice, "no")) == 0) || ((strcmp(choice, "N") == 0)) || ((strcmp(choice, "n")) == 0))
    {
        goto end;
    }
    else
    {
        printf("\nWrong input!!\n");
        goto WRN_CH;
    }

end:
    printf("\nPress any key to exit...");
    getch();
    return 0;
}