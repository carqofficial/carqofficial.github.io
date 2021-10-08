/*Multiplication Table*/
#include<stdio.h>

int main()
{
    
    /*declearing variables*/
    int A, B, T, C;

    /*declearing Values*/
    printf("\nMultiplication Table For : \n");
    scanf("%d", &A);

    B = 0;

    printf("\nMultiplication Table Till : \n");
    scanf("%d", &T);

    /*printing header*/
    printf("\nMultiplication Table For %d", A);

    /*starting While Function*/
    while(B<=(T-1))
    {
        C = A*(B+1);
        printf("\n      %d X %d = %d", A, (B+1), C);
        B = B + 1;

    }
    return 0;
}
