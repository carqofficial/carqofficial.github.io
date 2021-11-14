#include <stdio.h>
#include <conio.h>

int main()
{
    double e, plus, div;
    int n;
    n = 1000;
    e = 1;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        div = 1;
        for (j = 1; j <= i; j++)
        {
            div *= j;
        }
        plus = 1 / div;
        e += plus;
    }

    printf("\nValue of Euler's number (e) : %lf", e);
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}