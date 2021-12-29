#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double cal;
int choice;

void SUM(double *dig1, double *dig2)
{
    system("cls");
    cal = (*dig1 + *dig2);
}

void DIFFERENCE(double *dig1, double *dig2)
{
    system("cls");
    cal = (*dig1 - *dig2);
}

void PRODUCT(double *dig1, double *dig2)
{
    system("cls");
    cal = ((*dig1) * (*dig2));
}

void DIVISION(double *dig1, double *dig2)
{
    system("cls");
    cal = ((*dig1) / (*dig2));
}

void cal_prt(double *dig1, double *dig2)
{
    system("cls");
    if (choice == 1)
    {
        printf("\n%.2lf + %.2lf = %.2lf\n\n", *dig1, *dig2, cal);
    }
    if (choice == 2)
    {
        printf("\n%.2lf - %.2lf = %.2lf\n\n", *dig1, *dig2, cal);
    }
    if (choice == 3)
    {
        printf("\n%.2lf x %.2lf = %.2lf\n\n", *dig1, *dig2, cal);
    }
    if (choice == 4)
    {
        printf("\n%.2lf / %.2lf = %.2lf\n\n", *dig1, *dig2, cal);
    }
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
}

int main()
{
    double num1, num2;
    printf("\nEnter first digit  : ");
    scanf("%lf", &num1);
    printf("Enter second digit : ");
    scanf("%lf", &num2);

    printf("\nWhat operations will be applied on two numbers : ");
    printf("\n1. Sum of the numbers\n2. Difference of the numbers\n3. Product of the numbers\n4. Division of the numbers");
    printf("\n\nEnter a number according to you input : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        SUM(&num1, &num2);
    }
    if (choice == 2)
    {
        DIFFERENCE(&num1, &num2);
    }
    if (choice == 3)
    {
        PRODUCT(&num1, &num2);
    }
    if (choice == 4)
    {
        DIVISION(&num1, &num2);
    }
    cal_prt(&num1, &num2);
    return 0;
}
