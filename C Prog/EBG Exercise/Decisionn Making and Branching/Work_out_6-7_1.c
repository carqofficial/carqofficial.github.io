#include<stdio.h>

int main()
{
    int A, B, SAM_A, SAM_B;
    printf("\nYou have to enter two numbers for GCD.");
    printf("\n\nEnter the first number : ");
    scanf("%d", &A);
    printf("Enter the first number : ");
    scanf("%d", &B);
    SAM_A = A;
    SAM_B = B;
    while (SAM_A != SAM_B)
    {
        if((SAM_A == 0) || (SAM_B == 0))
        {
            printf("\nWrong Input!!\n\n");
            goto END;
        }
        if(SAM_A>SAM_B)
        {
            SAM_A -= SAM_B;
        }
        else if(SAM_B>SAM_A)
        {
            SAM_B -= SAM_A;
        }
    }
    printf("\n\nGCD of %d and %d : %d\n\n", A, B ,SAM_A);
END:

    return 0;
}