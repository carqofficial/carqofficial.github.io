#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int x, *p1, **p2;
    x = 10;
    p1 = &x;
    p2 = &p1;
    printf("\n%d %u", x, &x);
    printf("\n%d %u", p1, &p1);
    printf("\n%d %u", p2, &p2);
    printf("%d", **p2);
    return 0;  
}