#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void space(double a, double b, int space_num)
{
    int i;
    printf("\nPrinting %.2lf & %.2lf with space of %d between them...", a, b, space_num);
    printf("\n%.2lf", a);
    for (i = 0; i < space_num; i++)
    {
        printf(" ");
    }
    printf("%.2lf", b);
    printf("\n\n");
}

int main()
{
    double x, y;
    printf("\nEnter the first  number : ");
    scanf("%lf", &x);
    printf("Enter the second number : ");
    scanf("%lf", &y);
    space(x, y, 20);
    return 0;
}