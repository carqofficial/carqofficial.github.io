#include<stdio.h>

int main()
{
    /*declearing variables*/
    int a, b, c;
    float d, x;

    /*declearing values*/
    printf("\nValue of a : ");
    scanf("%d", &a);
    
    printf("Value of b : ");
    scanf("%d", &b);
    
    printf("Value of c : ");
    scanf("%d", &c);

    /*mathematical function declearation*/
    d = (b - c);
    x = (a / d);
    printf("\nx = a/(b - c) = %f", x);
    return 0;    
}