#include <stdio.h>
#include <conio.h>

int main()
{
    int g[5], i, k, ARR, m;
    printf("\nSalary structure of employees in your company : ");
    printf("\n-------------------------");
    printf("\nGroup           Pay-Range");
    printf("\n-------------------------");
    printf("\n  1              750-1500");
    printf("\n  2             1501-3000");
    printf("\n  3             3001-4500");
    printf("\n  4             4501-6000");
    printf("\n  5            above 6000");
    printf("\n-------------------------\n");

    printf("\nAccording to above data : ");
    for (ARR = 1; ARR <= 5; ARR++)
    {
        printf("\nEnter the number of employees in  group %d : ", ARR);
        scanf(" %d", &g[ARR]);
    }

    for (ARR = 1; ARR <= 5; ARR++)
    {
        printf("\n             |");
        for (i = 1; i <= 3; i++)
        {
            if (i = 2)
            {
                printf("\nGroup-%d      |", k);
                for (k = 1; k <= g[ARR]; k++)
                {
                    printf("*");
                }
                printf("     (%d)", g[ARR]);
            }
            else
            {
                printf("\n             |");

                for (k = 1; k <= g[ARR]; k++)
                {
                    printf("*");
                }
            }
        }
        printf("\n             |");
    }
    return 0;
}