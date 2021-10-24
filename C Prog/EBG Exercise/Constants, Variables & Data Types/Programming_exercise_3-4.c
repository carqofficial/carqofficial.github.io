#include<stdio.h>

int main()
{
    /*declearing variablews*/
    int x, y;
    short int z;

    /*initializing variables*/
    x = 123456;
    y = 987654;
    z = (x + y);

    /*printing*/
    printf("\nValue of x = %d\nValue of y = %d\nValue of z = %hu", x, y, z);

    return 0;
}