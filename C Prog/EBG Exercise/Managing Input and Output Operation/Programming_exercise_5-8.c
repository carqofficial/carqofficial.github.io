#include <stdio.h>

int main()
{
    double a = 10.45678;
    printf("\nThe number is : %.5lf", a);
    printf("\n\nExpressinh the number in fixed-point format : ");
    printf("\nCorrect to two   decimal places : %.2lf", a);
    printf("\nCorrect to four  decimal places : %.4lf", a);
    printf("\nCorrect to eight decimal places : %.8lf\n\n", a);
    return 0;
}