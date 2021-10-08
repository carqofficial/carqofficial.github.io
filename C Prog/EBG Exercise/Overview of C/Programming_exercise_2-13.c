#include<stdio.h>
#include<math.h>

int main()
{
    /*declearing variables*/
    float x1, y1, x2, y2 , dx, dy, Sdx, Sdy;
    double D2, D;
    
    /*decleaing values*/
    printf("\nEnter coordinate of the first point in (x1, y1) formate :");
    scanf("%f, %f", &x1, &y1);
    
    printf("\nEnter coordinate of the first point in (x2, y2) formate :");
    scanf("%f, %f", &x2, &y2);

    /*establishing logic*/
    dx = (x1 - x2);
    dy = (y1- y2);
    Sdx = pow( dx, 2);
    Sdy = pow( dy, 2);
    D2 = Sdx + Sdy;
    D = sqrt(D2);

    printf("\nThe distance between two points are : %f ", D);
    
    return 0;
}