#include<stdio.h>
#include<math.h>

#define PI 22/7
#define MAX 180

int main()
{
    int angle;
    float RAD, COS;
    angle = 10;
    printf("     Angle              cos(Angle)\n");
    while(angle<=MAX)
    {
        RAD = (angle * PI)/MAX;
        COS = cos(RAD);
        printf("%9d          %13.5f\n", angle, COS);
        angle = angle + 5;
    }
    return 0;
}