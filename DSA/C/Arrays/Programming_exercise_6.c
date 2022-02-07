#include <stdio.h>

int sqr_entry()
{
    int sides;
    printf("\nEnter the side of the sqaure in cm : ");
    scanf("%d", &sides);
    return (sides);
}

void sqr_print(int *sides)
{
    int i, j;
    printf("\nPrinting the square : \n\n");

    for (i = 0; i < *sides; i++)
    {
        printf(" ");
        if ((i == ((*sides) / 2)))
        {
            printf("%d cm", *sides);
        }
    }
    for (i = 0; i < (*sides); i++)
    {
        printf("\n");
        for (j = 0; j < *sides; j++)
        {
            printf("* ");
        }
    }
}

int main()
{
    int sides;
    sides = sqr_entry();
    sqr_print(&sides);
    return 0;
}