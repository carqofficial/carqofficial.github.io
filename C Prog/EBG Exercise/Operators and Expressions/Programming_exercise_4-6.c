#include<stdio.h>
#include<math.h>

int main()
{
    double distance, time, u, a, a_com, u_com;

    printf("\nEnter the value of the time interval in second : ");
    scanf("%lf", &time);
    printf("Enter the value of the inutial velocity in m/sec : ");
    scanf("%lf", &u);
    printf("Enter the acceleration of the car in m/(sec^2) : ");
    scanf("%lf", &a);

    a_com = (a*(pow(time, 2)))/2;
    u_com = u*time;
    distance = u_com + a_com;

    printf("\nThe distance travelled by the car : %lf m\n\n", distance);


    return 0;
}