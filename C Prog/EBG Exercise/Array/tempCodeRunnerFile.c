#include <stdio.h>

int main()
{
    double money;
    printf("\nEnter the total amount : ");
    scanf("%lf", &money);
    int mcurr[9] = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int mcount[9] = {0}, i;
    for (i = 0; i <= 8; i++)
    {
        if (money >= mcurr[i])
        {
            mcount[i] = (int)(money / mcurr[i]);
            money -= (mcount[i] * mcurr[i]);
        }
    }
    printf("\n------------------------------");
    printf("\nMinimum currency denomination : ");
    printf("\n------------------------------\n");
    for (i = 0; i <= 8; i++)
    {
        if (mcount[i] != 0)
        {
            printf("\n%4d --> %d", mcurr[i], mcount[i]);
        }
    }
    printf("\n\n");
    return 0;
}