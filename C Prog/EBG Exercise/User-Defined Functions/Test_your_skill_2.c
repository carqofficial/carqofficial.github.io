#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void GCD(int x, int y)
{
    /*system("cls");*/
    int gcd;
    gcd = 1;
    int i;

    for (i = 1; i <= x && i <= y; i++)
    {
        if (((x % i) == 0) && ((y % i) == 0))
        {
            gcd = i;
        }
    }
    printf("\nGCD of %d and %d is %d.\n\n", x, y, gcd);
}

int main()
{
    int num1, num2;
    printf("\nEnter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    GCD(num1, num2);
    printf("press any key to exit.....");
    getch();
    system("cls");
    printf("\n\n");
    return 0;
}