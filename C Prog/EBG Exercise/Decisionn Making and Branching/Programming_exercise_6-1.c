#include <stdio.h>
#include <conio.h>

int main()
{
    int CHECKER;
    long long int INTERGER;
    printf("\nEnter an integer number : ");
    scanf("%lld", &INTERGER);

    CHECKER = INTERGER % 2;

    switch (CHECKER)
    {
    case 0:
        printf("\nNUMBER IS EVEN.");
        break;

    default:
        printf("\nNUMBER IS ODD.");
        break;
    }
    printf("\n\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}