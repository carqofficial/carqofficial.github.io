#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double x, y;

/*
FIRST TIME POINTER USE

HELP FROM : 
1 --> https://stackoverflow.com/questions/162941/why-use-pointers
2 --> https://www.quora.com/Why-we-use-POINTERS-in-programming-whats-the-practical-use
3 --> https://www.geeksforgeeks.org/c-program-swap-two-numbers/
*/

void EXCHANGE(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("\nEnter the value of x : ");
    scanf("%lf", &x);
    printf("Enter the value of y : ");
    scanf("%lf", &y);
    EXCHANGE(&x, &y);
    printf("\nValue of x after exchange values : %.2lf", x);
    printf("\nValue of y after exchange values : %.2lf", y);
    printf("\n\n");
    return 0;
}