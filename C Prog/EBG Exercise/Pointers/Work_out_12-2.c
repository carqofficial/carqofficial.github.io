#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("\nValue of x is %d", x);
    printf("\n%d is stored at address %u", x, &x);
    printf("\n%d is stored at address %u", *&x, &x);
    printf("\n%d is stored at address %u", *ptr, ptr);
    printf("\n%d is stored at address %u", y, &y);
    *ptr = 25;
    printf("\nNow x = %d\n\n", x);

    /*int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("\nValue of x is %d", x);
    printf("\n%d is stored at address %d", x, ptr);
    printf("\n%d is stored at address %u", *&x, &x);
    printf("\n%d is stored at address %u", y, &y);
    *ptr = 25;
    printf("\nNow x = %d\n\n", x);*/

    return 0;
}