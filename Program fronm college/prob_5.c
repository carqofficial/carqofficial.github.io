#include <stdio.h>
#include <math.h>
int main()
{
    double side, side2, area;
    printf("\nMention the side of the equilateral triangle (in cm.) : ");
    scanf("%lf", &side);
    side2 = pow(side, 2);
    area = ((sqrt(3))*side2)/4;
    printf("\nArea of the equilateral triangle : %lf sq.cm.\n\n", area);
    return 0;
}