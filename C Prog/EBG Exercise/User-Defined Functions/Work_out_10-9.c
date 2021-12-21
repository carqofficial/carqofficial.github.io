#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x;

int function1(void)
{
    x = x + 10;
}

int function2(void)
{
    int x;
    x = 1;
    return (x);
}

int function3(void)
{
    x = x + 10;
}

int main()
{
    x = 10;
    printf("\n%d", x);
    printf("\n%d", function1());
    printf("\n%d", function2());
    printf("\n%d\n\n", function3());
}