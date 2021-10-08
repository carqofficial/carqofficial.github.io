#include <stdio.h>

int main()
{
    int num, algb;

    printf("\nEnter a integer : ");
    scanf("%d", &num);

    algb = num % 2;

    (algb == 0) ? (printf("\nYou have entered even number.\n\n")) : (printf("\nYou have entered odd number.\n\n"));
    return 0;
}