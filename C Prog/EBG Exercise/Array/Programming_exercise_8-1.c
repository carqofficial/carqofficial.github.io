#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num;
    printf("\nEnter the numbers of pairs of point to be entered : ");
    scanf("%d", &num);
    system("cls");
    double x[num + 1], y[num + 1], sum_x, sum_y, sum_x2, sum_xy, m, c;
    sum_x = 0;
    sum_y = 0;
    sum_x2 = 0;
    sum_xy = 0;

    int i;
    printf("\n\n");
    for (i = 1; i <= num; i++)
    {
        printf("Enter (x%d, y%d) in (x y) formate : ", i, i);
        scanf("%lf %lf", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += (pow(x[i], 2));
        sum_xy += (x[i] * y[i]);
    }
    system("cls");
    m = (((num * sum_xy) - (sum_x * sum_y)) / ((num * sum_x2) - (pow(sum_x, 2))));
    c = ((sum_y - (m * sum_x)) / num);
    printf("\n\n------------------------------------------------------");
    printf("\nCalculated straight line equation for the given data : ");
    printf("\n------------------------------------------------------");
    printf("\n\t\ty = % .2lfx + % .2lf ", m, c);
    printf("\n\npress any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}