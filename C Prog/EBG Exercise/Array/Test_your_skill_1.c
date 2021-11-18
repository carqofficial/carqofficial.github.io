#include <stdio.h>
#include <conio.h>

int main()
{
    double num[10], MAX, MIN, SUM;
    MAX = 0;

    SUM = 0;
    int i;
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number %*d : ", 2, i);
        scanf("%lf", &num[i]);
    }
    MIN = num[1];
    for (i = 1; i <= 10; i++)
    {
        MAX = (MAX >= num[i]) ? MAX : num[i];
        MIN = (MIN <= num[i]) ? MIN : num[i];
        SUM += num[i];
    }
    printf("\n\nMaximum number you have entered : %0.2lf", MAX);
    printf("\nMinimum number you have entered : %0.2lf", MIN);
    printf("\nAverage of the numbers you have entered : %0.2lf", (SUM / 10));
    printf("\n\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}