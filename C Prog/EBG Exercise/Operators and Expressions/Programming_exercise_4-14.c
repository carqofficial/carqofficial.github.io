#include <stdio.h>
#include <math.h>

int main()
{
    int degree, max_degree;
    double PI, rad, SIN, COS;
    PI = 3.142857142857143;
    /*double rad, SIN, COS;*/
    degree = 0;
    max_degree = 180;
    /*PI = 3.142857142857143;*/
    printf("\n       x          sin x         cos x     ");
    while (degree <= max_degree)
    {
        rad = degree * PI / 180;
        /*rad = degree;*/
        COS = cos(rad);
        SIN = sin(rad);
        printf("\n     %3d          %.2lf          %.2lf     ", degree, SIN, COS);
        degree += 15;
    }

    return 0;
}