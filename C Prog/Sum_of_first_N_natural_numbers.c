#include<stdio.h>

int main()
{
    int I, SUM, N;
    I = 0;
    SUM = 0;
    printf("\nEnter a value for the number N:\n");
    scanf("%d", &N);
    while(I <= N)
    {
        SUM = SUM + I;
        I = I + 1;
    }
    printf("The sum is %d\n", SUM);
    return 0;
}
