#include <stdio.h>
#include <conio.h>

int main()
{
    double PERCENTAGE;
    printf("\nEnter the student's total perentage of marks : ");
    scanf("%lf", &PERCENTAGE);

    if ((PERCENTAGE <= 100) && (PERCENTAGE >= 80))
    {
        printf("\nAccording to the devision grades : ");
        printf("\nStudent get : \"FIRST DIVISION\"\n");
    }
    else if ((PERCENTAGE < 80) && (PERCENTAGE >= 60))
    {
        printf("\nAccording to the devision grades : ");
        printf("\nStudent get : \"SECOND DIVISION\"\n");
    }
    else if ((PERCENTAGE < 600))
    {
        printf("\nAccording to the devision grades : ");
        printf("\nStudent get : \"THIRD DIVISION\"\n");
    }
    printf("\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}