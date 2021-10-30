#include <stdio.h>

int main()
{
    int i = 100;
    int CHECKER, SUM, ADD;
    SUM = 0;

    while (i <= 200)
    {
        CHECKER = (i % 7);
        if (CHECKER == 0)
        {
            ADD = i;
        }
        else if (CHECKER != 0)
        {
            ADD = 0;
        }
        SUM += ADD;
        i++;
    }

    printf("\nSum of numbers between 100 to 200 divisable by 7 : %d\n\n", SUM);
    return 0;
}