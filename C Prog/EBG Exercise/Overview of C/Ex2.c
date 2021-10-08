#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C;
    printf("\nValue of A for B^A : ");
    scanf("%d", &A);

    printf("Value of B for B^A : ");
    scanf("%d", &B);

    C = pow(B, A);

    printf("\nValue of A raised to the power of B or B^A : %d", C);
    return 0;
}
