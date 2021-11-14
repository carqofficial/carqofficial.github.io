#include <stdio.h>
#include <conio.h>

int main()
{
    double SUM;
    double n, i;
    printf("\nValue of n : ");
    scanf("%lf", &n);
    SUM = 0;
    for (i = 1; i <= n; i++)
    {
        double DOUBLE;
        DOUBLE = (1 / i);
        SUM += DOUBLE;
    }
    printf("\n1 + 1/2 + 1/3 + 1/4 + 1/5 +...... 1/n = %lf", SUM);
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}