#include<stdio.h>
#include<math.h>
#define pi 3.1428

int main()
{
    int x1, y1, x2, y2;
    float Dx, Dy, D2x, D2y, DR, AREA;
    
    x1 = 2;
    x2 = 5;
    y1 = 2;
    y2 = 6;

    Dx = (x1 - x2);
    Dy = (y1 - y2);

    D2x = pow(Dx, 2);
    D2y = pow(Dy, 2);
    DR = (D2x + D2y);
    
    AREA = (pi)*((DR)/4);

    printf("Area of the circle : %f", AREA);

    return 0;
}