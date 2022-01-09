#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct
{
    char NAME[500];
    int AGE;
} NEW;

typedef union
{
    char NAME[500];
    int AGE;
} NEW_UNION;

int main()
{
    NEW PERSONAL;
    NEW_UNION PERSONAL_UNION;
    printf("\nEnter your name : ");
    scanf(" %[^\n]%*c", PERSONAL.NAME);
    printf("Enter you age : ");
    scanf("%d", &PERSONAL.AGE);
    printf("\nSize of the structure : %ld", sizeof(PERSONAL));
    printf("\nSize of the structure : %ld\n", sizeof(NEW));
    printf("\nEnter your name : ");
    scanf(" %[^\n]%*c", PERSONAL_UNION.NAME);
    printf("\nSize of the union : %ld\n\n", sizeof(PERSONAL_UNION));

    return 0;
}