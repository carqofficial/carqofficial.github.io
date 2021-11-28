#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int x;
    printf("\nEnter the size of the matrices : ");
    scanf("%d", &x);
    double T1[x][x], T2[x][x], TP[x][x], MAX;
    int i, j, countTP, MAX_INT, len;
    char MAXTP[5000];
    MAX = 0;

    printf("\n-------------------------");
    printf("\nEnter the first matrix : ");
    printf("\n-------------------------\n");
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T1[i][j]);
        }
    }

    printf("\n--------------------------");
    printf("\nEnter the second matrix : ");
    printf("\n--------------------------\n");
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T2[i][j]);
        }
    }

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            TP[i][j] = (T1[i][j] + T2[i][j]);
            MAX_INT = (int)TP[i][j];
            int s = snprintf(MAXTP, 5000, "%d", MAX_INT);
            len = strlen(MAXTP);
            MAX = (MAX >= len) ? MAX : len;
        }
    }
    countTP = (MAX + 4);
    printf("\n--------------------------");
    printf("\nSum of the two matrices : ");
    printf("\n--------------------------\n");
    for (i = 1; i <= x; i++)
    {
        printf("\n|  ");
        for (j = 1; j <= x; j++)
        {
            printf("%*.2lf  ", countTP, TP[i][j]);
        }
        printf("|");
    }
    printf("\n\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}