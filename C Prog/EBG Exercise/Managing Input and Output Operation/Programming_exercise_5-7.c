#include<stdio.h>

int main()
{
    double a = 10.45678;
    printf("\nThe number is : %lf", a);
    printf("\n\nExpressing the number in exponential form : ");
    printf("\n(a) Correct to two decimal palces   : %.2e", a);
    printf("\n(b) Correct to four decimal places  : %.4e", a);
    printf("\n(c) Correct to eight decimal places : %.8e\n\n", a);
    return 0;
}