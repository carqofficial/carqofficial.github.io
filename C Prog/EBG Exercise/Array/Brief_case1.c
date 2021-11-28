#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("\nFor how many numbers median to be calculated : ");
    scanf("%d", &n);
    double position[n + 1], numbers[n + 1];
    printf("\n------------------");
    printf("\nEnter the numbers : ");
    printf("\n------------------\n");

    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("Enter the number %d : ", i);
        scanf("%lf", &numbers[i]);
    }
    for (j = 1; j <= n; j++)
    {
        position[j] = numbers[j];
    }

    /*printf("\n");
    for (j = 1; j <= n; j++)
    {
        printf("\n%d. %lf", j, position[1][j]);
    }*/

    double t;
    for (i = 1; i <= (n - 1); i++)
    {
        for (j = 1; j <= (n - i); j++)
        {

            if (position[j] > position[j + 1])
            {
                t = position[j];
                position[j] = position[j + 1];
                position[j + 1] = t;
            }
            else
            {
                continue;
            }
        }
    }

    /*for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            if (position[i][j] > position[i][j + 1])
            {
                position[i + 1][j + 1] = position[i][j];
                position[i + 1][j] = position[i][j + 1];
            }
            else if (position[i][j] <= position[i][j + 1])
            {
                position[i + 1][j] = position[i][j];
                position[i + 1][j + 1] = position[i][j + 1];
            }
        }
    }*/
    printf("\n---------------------------");
    printf("\nNumbers in ascending order : ");
    printf("\n---------------------------\n");

    for (j = 1; j <= n; j++)
    {
        printf("\n%.2lf", position[j]);
    }

    int checker_n;
    double median, median_even1, median_even2;
    checker_n = (n % 2);
    if (checker_n != 0)
    {
        median = position[((n + 1) / 2)];
    }

    if (checker_n == 0)
    {
        median_even1 = position[(n / 2)];
        median_even2 = position[((n / 2) + 1)];
        median = (median_even1 + median_even2) / 2;
    }

    printf("\n\n---------------------------------------");
    printf("\nMedian of the numbers you have entered : %.2lf", median);
    printf("\n---------------------------------------\n");
    printf("\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}