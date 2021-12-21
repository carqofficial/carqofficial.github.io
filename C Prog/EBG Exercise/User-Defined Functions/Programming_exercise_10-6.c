#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void DM(double num, int decimal)
{
    system("cls");
    long long int ten_pow;
    double adder;
    ten_pow = pow(10, decimal);
    adder = (0.45) / ten_pow;
    printf("\nThe number after rounded upto %d place : %.*lf", decimal, decimal, (num + adder));
    printf("\n\n");
}

int main()
{
    int dm_place;
    double number;
    printf("\nEnter the number : ");
    scanf("%lf", &number);
    printf("Enter the place upto which the number willbe rounded off : ");
    scanf("%d", &dm_place);
    DM(number, dm_place);
    return 0;
}