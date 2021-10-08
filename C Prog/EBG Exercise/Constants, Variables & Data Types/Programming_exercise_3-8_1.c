#include<stdio.h>
#include<math.h>

int main()
{
    double NUM, SQUARE;
    printf("\nEnter the number and its square will be shown : ");
    scanf("%lf", &NUM);
    SQUARE = pow(NUM, 2);
    printf("\nSquare of %lf is : %lf", NUM, SQUARE);

    return 0;
}