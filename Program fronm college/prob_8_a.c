#include <stdio.h>

int main()
{
    int num, algb;

    printf("\nEnter an integer : ");
    scanf("%d", &num);

    algb = num % 2;

    if (algb == 0)
    {
        printf("\nYou have entered even number.\n\n");
    }
    if (algb != 0)
    {
        printf("\nYou have entered odd number.\n\n");
    }
    return 0;
}