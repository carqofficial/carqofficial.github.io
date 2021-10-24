#include <stdio.h>

int main()
{
    double an1, an2, an3, antotal;

    antotal = 180;
    printf("\nEnter the 1st angle of a triangle : ");
    scanf("%lf", &an1);
    printf("Enter the 2nd angle of the triangle : ");
    scanf("%lf", &an2);
    an3 = antotal - an1 - an2;
    printf("\n3rd angle of the tri angle : %lf", an3);

    return 0;
}