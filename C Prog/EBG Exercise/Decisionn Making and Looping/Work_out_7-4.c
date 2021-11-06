#include <stdio.h>

int main()
{
    int i, num_recent, MAX, num_pre, num_sum;
    MAX = 30;
    num_pre = 0;
    num_recent = 1;
    printf("\nFibonacci Series : \n");
    for (i = 1; i <= MAX; i++)
    {
        if (i == 1)
        {
            printf("\n%d", num_pre);
            printf(", %d", num_recent);
        }
        else
        {
            printf(", %d", num_sum);
        }

        num_sum = (num_pre + num_recent);
        num_pre = num_recent;
        num_recent = num_sum;
    }
    printf(",...... ");
    printf("\n\n");
    return 0;
}