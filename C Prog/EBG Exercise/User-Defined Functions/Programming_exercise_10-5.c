#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void FIBONACCI(int row)
{
    int F_prev, F_new, F_term;
    F_prev = 0;
    F_new = 1;
    int i;
    printf("\nFibonacci numbers (first %d numbers) : 1", row);
    for (i = 0; i < (row - 1); i++)
    {
        F_term = F_new + F_prev;
        printf(", %d", F_term);
        F_prev = F_new;
        F_new = F_term;
    }
    printf("\n\n");
}

int main()
{
    int num_row;
    printf("\nHow many Fibonacci numbers will be printed : ");
    scanf("%d", &num_row);
    FIBONACCI(num_row);
    return 0;
}