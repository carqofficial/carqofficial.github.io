#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int A, B;
    printf("\nYou have to enter two number to calculate GCD\n");
    printf("\nEnter the first number : ");
    scanf("%d", &A);
    printf("Enter the second number : ");
    scanf("%d", &B);
    int GCD(int A, int B);

    printf("\nGCD of %d and %d : %d", A, B, GCD(A, B));
    return 0;
}

int GCD(int x, int y)
{
    if(x>y)
    {
        return (GCD(x, y));
    }
    if(y == x)
    {
        return (x);
    }
    else
    {
        return (GCD(y, x%y));
    }
}