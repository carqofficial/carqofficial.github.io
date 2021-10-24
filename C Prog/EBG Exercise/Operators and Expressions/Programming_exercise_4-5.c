#include<stdio.h>

int main()
{
    double num;
    int num2, num1;
    printf("\nEnter a number : ");
    scanf("%lf", &num);

    num2 = (num + 1);
    num1 = (num);

    printf("\n%d      %lf      %d\n\n", num1, num, num2);

    return 0;
}