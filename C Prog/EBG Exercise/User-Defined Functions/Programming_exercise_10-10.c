#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int choice;
double cal;

void PERIMETER(double *A, double *B, double *C)
{
    system("cls");
    cal = (*A + *B + *C);
}
void AREA(double *A, double *B, double *C)
{
    system("cls");
    double s;
    s = (*A + *B + *C) / 2;
    cal = pow((s * (s - *A) * (s - *B) * (s - *C)), 0.5);
}
void cal_prt(void)
{
    system("cls");
    if (choice == 1)
    {
        printf("\nPerimeter of the triangle : %.2lf\n\n", cal);
    }
    if (choice == 2)
    {
        printf("\nArea of the triangle : %.2lf\n\n", cal);
    }
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
}

int main()
{
    double side1, side2, side3;
    printf("\nEnter the side-1 of the triangle : ");
    scanf("%lf", &side1);
    printf("Enter the side-2 of the triangle : ");
    scanf("%lf", &side2);
    printf("Enter the side-3 of the triangle : ");
    scanf("%lf", &side3);
    system("cls");
    printf("\nwhat do you want to calculate : ");
    printf("\n1. Perimeter of the triangle\n2. Area of the triangle");
    printf("\n\nEnter a number according to your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        PERIMETER(&side1, &side2, &side3);
    }
    if (choice == 2)
    {
        AREA(&side1, &side2, &side3);
    }
    cal_prt();
    return 0;
}