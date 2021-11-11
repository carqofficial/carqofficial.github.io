#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    double y1, y2, x, a;
    int y1_p, y2_p;
    a = 0.4;
    printf("\n  y       .____________________________________________________________________________________________________________________");
    for (x = 0; x < 5; x += 0.25)
    {
        y1 = (int)(((exp((a) * (x) * (-1))) * (50)) + 0.5);
        y2 = (int)(((exp((a) * ((x * x) / 2) * (-1))) * (50)) + 0.5);
        /*printf("\n* = %lf, 0 = %lf\n", y1, y2);*/
        if ((y1 - y2) > 0)
        {
            if (x != 2.5)
            {
                printf("\n          |");
            }
            else if (x == 2.5)
            {
                printf("\n  x       |");
            }
            for (y2_p = 1; y2_p <= y2; y2_p++)
            {
                printf("  ");
            }
            printf("0");
            for (y1_p = 1; y1_p <= (y1 - y2); y1_p++)
            {
                printf("-");
            }
            printf("*");
        }
        else if ((y2 - y1) > 0)
        {
            if (x != 2.5)
            {
                printf("\n          |");
            }
            else if (x == 2.5)
            {
                printf("\n  x       |");
            }
            for (y1_p = 1; y1_p <= y1; y1_p++)
            {
                printf("  ");
            }
            printf("*");
            for (y2_p = 1; y2_p <= (y2 - y1); y2_p++)
            {
                printf("-");
            }
            printf("0");
        }
        else if (y2 == y1)
        {
            if (x != 2.5)
            {
                printf("\n          |");
            }
            else if (x == 2.5)
            {
                printf("\n  x       |");
            }
            for (y2_p = 1; y2_p <= y2; y2_p++)
            {
                printf("  ");
            }
            printf("#");
        }
    }
    printf("\n\n");
    getch();
    return 0;
}