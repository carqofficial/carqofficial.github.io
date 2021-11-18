#include <stdio.h>
#include <conio.h>

int main()
{
    int n, x;
    printf("\nFor calculation the sum of the series 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + ..... + n^2");
    printf("\nEnter the value of the n (Floating numbers be converted to integer) : ");
    scanf("%d", &n);
    int x2[n + 1], sum;
    int i;
    x = 1;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        x2[i] = (x * x);
        x++;
    }

    for (i = 1; i <= n; i++)
    {
        sum += x2[i];
    }
    printf("\nSum of the above mentioned series upto %d th term : %d", n, sum);
    printf("\n\nPrint any key to exit.....");
    getch();
    printf("\n\n");

    return 0;
}