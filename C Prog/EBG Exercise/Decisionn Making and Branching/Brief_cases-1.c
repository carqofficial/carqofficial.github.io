#include <stdio.h>

int main()
{
    double PRICE, MAX, MIN, SUM, AVERAGE;
    int count, i;

    MAX = 1;
    SUM = 0;

    printf("\nEnter number of products sell cost you want to input : ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        switch (i)
        {
        case 1:
            printf("\nEnter the sell cost of 1st product : ");
            break;
        case 2:
            printf("Enter the sell cost of 2nd product : ");
            break;
        case 3:
            printf("Enter the sell cost of 3rd product : ");
            break;
        default:
            printf("Enter the sell cost of %dth product : ", i);
            break;
        }
        scanf("%lf", &PRICE);
        SUM += PRICE;
        MAX = (MAX >= PRICE) ? MAX : PRICE;
        if (i == 1)
        {
            MIN = PRICE;
        }
        else
        {
            MIN = (MIN >= PRICE) ? PRICE : MIN;
        }
    }

    AVERAGE = SUM / count;
    printf("\n\nMaximun sell-cost    : %.3lf", (MAX + 0.00045));
    printf("\nMinimun sell-cost    : %.3lf", (MIN + 0.00045));
    printf("\nAverage of sell-cost : %.3lf", (AVERAGE + 0.00045));
    printf("\nRange of sell-cost   : %.3lf\n\n", (MAX - MIN + 0.00045));

    return 0;
}
