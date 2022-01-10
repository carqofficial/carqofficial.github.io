#include <stdio.h>

int main()
{
    int a, *a_add;
    float b, *b_add;
    char c, *c_add;
    a = 2;
    b = 2.2;
    c = 'c';
    a_add = &a;
    b_add = &b;
    c_add = &c;
    printf("\nAddress of %d                     : %u", a, a_add);
    a_add++;
    printf("\nAfter increment, address of %d    : %u", a, a_add);
    printf("\n\nAddress of %.2lf                  : %u", b, b_add);
    b_add++;
    printf("\nAfter increment, address of %.2lf : %u", b, b_add);
    printf("\n\nAddress of %c                     : %u", c, c_add);
    c_add++;
    printf("\nAfter increment, address of %c    : %u\n\n", c, c_add);

    return 0;
}