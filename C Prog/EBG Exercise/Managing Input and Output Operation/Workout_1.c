#include <stdio.h>

int main()
{
    char option;
    printf("\nWould you like to know my name?");
    printf("\nType Y for yes and N for no(Y/N) : ");
    option = getchar();
    if ((option == 'Y') || (option == 'y'))
    {
        printf("\nMy name is Sayan Das.\n\n");
    }
    else if ((option == 'N') || (option == 'n'))
    {
        printf("\nYou are good for nothing\n\n");
    }
    else
    {
        printf("\nYou have entered wrong input.\n\n");
    }
    return 0;
}