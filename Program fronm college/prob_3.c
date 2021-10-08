#include <stdio.h>

int main()
{
    int a, b, check;
    printf("\nEnter the integer a : ");
    scanf("%d", &a);
    printf("Enter the integer b : ");
    scanf("%d", &b);

    check = a % b;
    if (check == 0)
    {
        printf("\na is multiple of b.\n\n");
    }
    else
    {
        printf("\na is not multiple of b.\n\n");
    }

    return 0;
}