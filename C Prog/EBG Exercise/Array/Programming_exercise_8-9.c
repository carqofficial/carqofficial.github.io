#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int SIZE;
    printf("\nEnter the array size : ");
    scanf("%d", &SIZE);
    double ARR[SIZE + 1], MAX, ARR_PRESERVED[SIZE + 1];
    int SIZE_temp = SIZE;
    int i, MAX_index;
    printf("\nEnter the array with a space between one element to another : ");
    for (i = 1; i <= SIZE_temp; i++)
    {
        scanf("%lf", &ARR[i]);
        ARR_PRESERVED[i] = ARR[i];
    }
    int j;
    j = 1;
    system("cls");

    /*printf("\nEntered array is : ");
    for (i = 1; i <= SIZE; i++)
    {
        printf("  %.2lf", ARR_PRESERVED[i]);
    }*/
    printf("\n");
LOOP:
    MAX = 0;
    for (i = 1; i <= SIZE_temp; i++)
    {
        MAX = (MAX >= ARR[i]) ? MAX : ARR[i];
    }
    for (i = 1; i <= SIZE_temp; i++)
    {
        if (MAX == ARR[i])
        {
            MAX_index = i;
        }
    }
    double t;
    t = ARR[SIZE_temp];
    ARR[SIZE_temp] = ARR[MAX_index];
    ARR[MAX_index] = t;
    /*printf("\nThe Array is : ");
    for (i = 1; i <= SIZE; i++)
    {
        printf("  %.2lf", ARR[i]);
    }*/
    while (j != (SIZE - 1))
    {
        /*printf("\n%d", SIZE_temp);*/
        SIZE_temp--;
        j++;
        goto LOOP;
    }
    printf("\n\n");
    /*printf("\npress any key to go further....");
    getch();*/
    system("cls");
    printf("\n------------------");
    printf("\nEntered array is : ");
    for (i = 1; i <= SIZE; i++)
    {
        printf("  %.2lf", ARR_PRESERVED[i]);
    }
    printf("\n------------------");
    printf("\n");
    printf("\n----------------------------");
    printf("\nArray after selection sort : ");

    for (i = 1; i <= SIZE; i++)
    {
        printf("  %.2lf", ARR[i]);
    }
    printf("\n----------------------------");
    printf("\n");
    printf("\npress any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}