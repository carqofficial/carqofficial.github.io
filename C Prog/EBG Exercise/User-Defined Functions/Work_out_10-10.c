#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void stat(void)
{
    static int x = 0;
    x = x + 1;
    printf("\n%d", x);
}

void stat1(void)
{
    static int x;
    x = 0;
    x = x + 1;
    printf("\n%d", x);
}

int main()
{
    int i;
    printf("\nprinting stat function : ");
    for (i = 0; i < 3; i++)
    {
        stat();
    }
    printf("\n\nprinting stat1 function : ");
    for (i = 0; i < 3; i++)
    {
        stat1();
    }
    printf("\n\n");
    return 0;
}