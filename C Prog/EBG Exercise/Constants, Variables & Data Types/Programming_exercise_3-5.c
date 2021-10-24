#include<stdio.h>

int main()
{
    /*declearing variables*/
    typedef float add;
    typedef float substract;
    typedef float results;

    add A, B;
    substract C, D;
    results ADD, SUB;

    /*initializing variables*/
    printf("\nEnter two numbers to add in (A, B) formate : ");
    scanf("%f, %f", &A, &B);

    printf("\nEnter two numbers to substrace in (A, B) formate : ");
    scanf("%f, %f", &C, &D);

    /*establishing logic*/
    ADD = A + B;
    SUB = C - D;

    /*printing*/
    printf("\n%f + %f = %f", A, B ,ADD);
    printf("\n%f - %f = %f", C, D, SUB);

    return 0;
}