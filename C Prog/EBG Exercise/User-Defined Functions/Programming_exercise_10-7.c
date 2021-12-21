#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void prime(int *num)
{
    int i;
    int count;
    count = 0;

    if ((*num) == 1)
    {
        printf("\nIt is not a prime number.\n\n");
    }

    for (i = 2; i < (*num); i++)
    {
        if (((*num) % i) == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("\nIt is a not prime number.\n\n");
    }

    else if (count == 0)
    {
        printf("\nIt is a prime number.\n\n");
    }
}

int main()
{
    int num_prime;
    printf("\nEnter the an integer number : ");
    scanf("%d", &num_prime);
    prime(&num_prime);
    return 0;
}