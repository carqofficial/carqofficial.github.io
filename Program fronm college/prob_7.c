#include <stdio.h>

int main()
{
    double S_A, S_B, AREA, PERIMETER;
    printf("\nEnter two sides of a rectangle : ");
    scanf("%lf %lf", &S_A, &S_B);
    AREA = (S_A * S_B) + 0.00045;
    PERIMETER = (S_A + S_B) + 0.00045;

    printf("\nArea of the rectangle : %.3lf\nPerimeter of hte rectangle : %.3lf\n\n", AREA, PERIMETER);
    return 0;
}