#include <stdio.h>
#include <conio.h>

int main()
{
    long long int num_prev, num_curr, i, n, sum;
    printf("\nFor Fibonacci Numbers : ");
    printf("\nEnter the value of n(number of Fibonacci Numbers to be printed) : ");
    scanf("%lld", &n);
    num_curr = 1;
    num_prev = 0;
    printf("\nPrinting %d Fibonacci Numbers in a sequence : \n0", n);
    for (i = 1; i <= n; i++)
    {
        printf(", %lld", num_curr);
        sum = num_curr + num_prev;
        num_prev = num_curr;
        num_curr = sum;
    }
    printf("\n");
    printf("\nPress any key to exit.....");
    getch();
    printf("\n\n");
}