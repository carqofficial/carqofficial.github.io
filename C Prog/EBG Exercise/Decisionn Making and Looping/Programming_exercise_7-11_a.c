#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    double rad_x, up, down, quan, sin, deg_x;
    printf("\nEnter the value of x for sinx : ");
    scanf("%lf", &deg_x);
    up = -1;
    sin = 0;
    rad_x = ((deg_x / 180) * 3.141592);
    int i, j;
    for (i = 1; i <= 1000; i += 2)
    {
        down = 1;
        for (j = 1; j <= i; j++)
        {
            down *= j;
        }
        up *= ((pow(rad_x, i)) * (-1));
        sin += (up / down);
        /*printf("\n%lf\n", sin);*/
    }
    printf("\nValue of sin(%.2lf) : %lf\n\n", deg_x, sin);
    return 0;
}