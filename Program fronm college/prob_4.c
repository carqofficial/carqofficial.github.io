#include<stdio.h>

int main()
{
    int a, check;
    printf("\nEnter an integer : ");
    scanf("%d", &a);

    check = a%2;
    (check == 0) ? (printf("\nYou have entered a even number.\n\n")) : (printf("\nYou have entered a odd number\n\n"));
}