#include<stdio.h>

int mul(int a, int b);

    void main()
    {
        int a, b, c;

        a = 5;
        b = 10;
        c = mul(a,b);

        printf("\nMultiplication of %d and %d is %d", a, b, c);
    }
    
        int mul(int x, int y)
        {
            int p;
            p = x*y;
            return(p);
        }