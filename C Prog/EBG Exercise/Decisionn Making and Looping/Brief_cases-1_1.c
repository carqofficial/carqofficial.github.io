#include <stdio.h>
#include <conio.h>

int main()
{
    int column, row, i;
    long long int value[10][10];
    int B(int row, int column);
    printf("\n\nmx");
    for (i = 0; i <= 10; i++)
    {
        printf("%8d", i);
    }
    printf("\n\n------------------------------------------------------------------------------------------");
    printf("\n\n");
    for (row = 1; row <= 10; row++)
    {
        for (column = 1; column <= 10; column++)
        {
            if (row >= column)
            {
                value[column][row] = B(row, column);
            }
            else
            {
                ;
            }
        }
    }
    printf(" 0       1\n\n");
    for (row = 1; row <= 10; row++)
    {
        printf("%2d", row);
        printf("%8d", 1);
        for (column = 1; column <= 10; column++)
        {
            if (row >= column)
            {
                printf("%8lld", value[column][row]);
            }
            else
            {
                ;
            }
        }
        printf("\n\n");
    }
    printf("------------------------------------------------------------------------------------------\n\n");
    printf("\nPress any key to exit...");
    getch();
    return 0;
}
int B(int m, int x)
{
    long long int m_FAC, x_FAC, mx_FAC, BI_COFFE;
    m_FAC = 1;
    x_FAC = 1;
    mx_FAC = 1;
    int i;
    for (i = 1; i <= x; i++)
    {
        x_FAC *= i;
    }
    for (i = 1; i <= m; i++)
    {
        m_FAC *= i;
    }
    for (i = 1; i <= (m - x); i++)
    {
        mx_FAC *= i;
    }
    BI_COFFE = (m_FAC) / (x_FAC * mx_FAC);
    return (BI_COFFE);
}