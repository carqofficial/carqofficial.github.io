#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char F_NAME[1000], L_NAME[1000], M_NAME[1000], NAME[1000];
    printf("\nEnter the first name : ");
    scanf("%s", &F_NAME);
    printf("Enter the middle name : ");
    scanf("%s", &M_NAME);
    printf("Enter the last name : ");
    scanf("%s", &L_NAME);
    int i;
    for (i = 0; i < strlen(F_NAME); i++)
    {
        NAME[i] = F_NAME[i];
    }
    NAME[strlen(F_NAME)] = ' ';
    for (i = 0; i < strlen(M_NAME); i++)
    {
        NAME[i + strlen(F_NAME) + 1] = M_NAME[i];
    }
    NAME[strlen(F_NAME) + strlen(M_NAME) + 1] = ' ';
    for (i = 0; i < strlen(L_NAME); i++)
    {
        NAME[i + strlen(F_NAME) + strlen(M_NAME) + 2] = L_NAME[i];
    }
    NAME[strlen(F_NAME) + strlen(M_NAME) + strlen(L_NAME) + 2] = '\0';
    system("cls");
    printf("Name is : %s\n\n", NAME);
    return 0;
}