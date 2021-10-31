#include <stdio.h>

int main()
{
    printf("\nCalculating the sum of numbers between 0 to 100 that are divisable by 6 but not by 4 : ");
    int num[100], checker_4, checker_6, sum;
    int i;
    int j = 1;
    sum = 0;
    for (i = 1; i <= 100; i++)
    {
        checker_4 = (i % 4);
        checker_6 = (i % 6);
        if ((checker_6 == 0) && (checker_4 != 0))
        {
            num[j] = i;
            j++;
        }
    }
    int k;
    for (k = 1; k <= (j - 1); k++)
    {
        if (k == 1)
        {
            printf("\n\nNumbers are : ");
            printf("%d", num[k]);
        }
        else if (k != 1)
        {
            printf(", %d", num[k]);
        }
        sum += num[k];
    }

    printf("\nSum of these numbers is : %d\n\n", sum);
    return 0;
}