#include <stdio.h>
#include <conio.h>

int main()
{
    double a, b;
    printf("\nEnter the value of a : ");
    scanf("%lf", &a);
    printf("Enter the value of b : ");
    scanf("%lf", &b);
    if (a > b)
    {
        printf("\na is greater than b.");
    }
    else if (a < b)
    {
        printf("\nb is greater than a.");
    }
    else if (a == b)
    {
        printf("\na and b are equal.");
    }
    printf("\n\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}