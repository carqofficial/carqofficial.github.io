#include<stdio.h>

int main()
{
    /*declearing variables*/
    int NUM, i, N, MUL;

    /*initializing variables*/
    printf("\nENter the number of which you want the multiplication table : ");
    scanf("%d", &NUM);

    printf("\nTill which number the %d is to be multiplied : ");
    scanf("%d", &N);

    /*logic*/
    for(i = 1; i<=N; i++)
    {
        MUL = (NUM*i);
        printf("\n%5d x %5d  = %4d", NUM, i, MUL);
    }


    return 0;

}