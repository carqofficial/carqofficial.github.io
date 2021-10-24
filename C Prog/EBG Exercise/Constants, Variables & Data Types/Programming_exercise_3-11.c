#include <stdio.h>

int main()
{
    double DIS, FUEL, MILE;

    printf("\nDistance travelled by the car (in KM) : ");
    scanf("%lf", &DIS);

    printf("How much is the fuel consumed by the car? (in litres) : ");
    scanf("%lf)", &FUEL);

    MILE = (DIS / FUEL);
    printf("\nMileage of car = %lf KM/Litre ", MILE);

    return 0;
}