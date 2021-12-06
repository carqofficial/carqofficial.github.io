#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char CHARECTER;
    printf("\n");
    printf("|");
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf(" %3d - %c |", i, i);
    }
    printf("|");
    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf(" %3d - %c |", i, i);
    }
    printf("\n");
    return 0;
}