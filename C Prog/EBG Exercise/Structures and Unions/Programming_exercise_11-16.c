#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct
{
    char NAME[500];
    int AGE;
} NEW;

int main()
{
    NEW PERSONAL;
    printf("\nEnter your name : ");
    scanf(" %[^\n]%*c", PERSONAL.NAME);
    printf("Enter you age : ");
    scanf("%d", &PERSONAL.AGE);
    printf("\nSize of the structure : %d", sizeof(PERSONAL));
    printf("\nSize of the structure : %d\n\n", sizeof(NEW));
    return 0;
}