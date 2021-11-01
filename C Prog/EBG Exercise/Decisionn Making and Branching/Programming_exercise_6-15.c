#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.142857142857143

int main()
{
    double ANS, RAD, convert;
    char T;
    printf("\nEnter the angle in degree : ");
    scanf("%lf", &RAD);
    convert = (RAD * PI) / 180;
    printf("\nEnter the trigonometric function type : ");
    printf("\n----------------------------------------");
    printf("\nS or s ---> sin");
    printf("\nC or c ---> cos");
    printf("\nT or t ---> tan");
    printf("\n----------------------------------------");
    printf("\nEnter your choice : ");
    scanf(" %c", &T);

    if ((T == 'S') || (T == 's'))
    {
        ANS = sin(convert);
        printf("\n\nAccording to your input : ");
        printf("\nsin(%.2lf) = %.2lf", (RAD + 0.0045), ANS);
    }
    else if ((T == 'C') || (T == 'c'))
    {
        ANS = cos(convert);
        printf("\n\nAccording to your input : ");
        printf("\ncos(%.2lf) = %.2lf", (RAD + 0.0045), ANS);
    }
    else if ((T == 'T') || (T == 't'))
    {
        ANS = tan(convert);
        printf("\n\nAccording to your input : ");
        printf("\ntan(%.2lf) = %.2lf", (RAD + 0.0045), ANS);
    }

    printf("\n\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}