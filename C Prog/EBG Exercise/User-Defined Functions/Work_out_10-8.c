#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void function1(void)
{
    int m;
    m = 10;
    printf("\n%d", m);
    return;
}

void function2(void)
{
    int m;
    m = 100;
    function1();
    printf("\n%d", m);
    return;
}

int main()
{
    int m;
    m = 1000;
    function2();
    printf("\n%d\n\n", m);
    return 0;
}
