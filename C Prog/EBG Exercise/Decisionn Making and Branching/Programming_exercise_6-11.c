#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a, b, c, MAX, MIN, MID;
    double pytha_SUM, pytha_SIDE;
START:
    printf("\nFor a triangle : ");
    printf("\nEnter the value of side a : ");
    scanf("%d", &a);
    printf("Enter the value of side b : ");
    scanf("%d", &b);
    printf("Enter the value of side c : ");
    scanf("%d", &c);

    /*help --> 1. https://www.geeksforgeeks.org/check-whether-triangle-valid-not-sides-given/
               2. https://www.wikihow.com/Determine-if-Three-Side-Lengths-Are-a-Triangle
    */

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        goto NEXT;
    }
    else
    {
        printf("\nEntered lengths are not of the measurements of triangle.\n");
        goto START;
    }
NEXT:
    MAX = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    /*printf("\nMAX : %d", MAX);*/
    MIN = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    /*printf("\nMIN : %d", MIN);*/
    MID = (a + b + c) - (MAX + MIN);
    /*printf("\nMID : %d", MID);*/
    pytha_SUM = (pow(MIN, 2)) + (pow(MID, 2));
    pytha_SIDE = pow(MAX, 2);
    if (pytha_SIDE == pytha_SUM)
    {
        printf("\n\nEntered lengths are measurements of right angle triangle.\n\n");
    }
    else
    {
        printf("\n\nEntered lengths are not measurements of right angle triangle.\n\n");
    }

    printf("\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}
