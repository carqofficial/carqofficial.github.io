#include <stdio.h>

int main()
{
    double a, b, div;
    printf("\nEnter first number : ");
    scanf("%lf", &a);
    printf("Enter second number : ");
    scanf("%lf", &b);
    div = (a / b);
    if (b ==0)
    {
        printf("\nDivisiion is not possible.\n\n");
    }
    else
    {
        printf("\na/b = %.3lf", div);
    }
    return 0;
}