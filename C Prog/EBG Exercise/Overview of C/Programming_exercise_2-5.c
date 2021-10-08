#include<stdio.h>

int main()
{
    /*declearing variables*/
    float V, T, S, A;

    /*declearing values*/
    printf("\nThe value of the distance travelled by the car (in KM): ");
    scanf("%f", &S);

    printf("The time taken by the car to travel the distance (in minutes) : ");
    scanf("%f", &T);

    /*declearing logic part*/
    A = (T/60);
    V = (S / A);
    printf("\nThe speed of the car (in KM/hr)  : %f", V);
    return 0;
}