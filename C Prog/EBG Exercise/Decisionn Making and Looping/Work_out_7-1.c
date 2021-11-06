#include <stdio.h>
#include <conio.h>

int main()
{
    double x;
    int n;
    printf("\nEnter the value of x : ");
    scanf("%lf", &x);
    printf("Enter an integer value of n : ");
    scanf("%d", &n);
    int i;
    i = 2;
    double y;
    y = x;
    while (i <= n)
    {
        y *= x;
        i++;
    }
    printf("\nAccording to your input data : ");
    printf("\nEnter value of x^n : %.2lf", y);
    printf("\n\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}