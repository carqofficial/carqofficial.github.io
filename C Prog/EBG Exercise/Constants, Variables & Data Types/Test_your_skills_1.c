#include<stdio.h>

int main()
{
    /*declearing variable*/
    float A, B, C;

    /*declearing values*/
    printf("\nEnter two numbers subsequently in (A, B) fromate : ");
    scanf("%f, %f", &A, &B);

    /*logic establishing*/
    C = (A / B);
    printf("\nValue of the division of %f by %f = %f", A, B, C);
    
    return 0;
}