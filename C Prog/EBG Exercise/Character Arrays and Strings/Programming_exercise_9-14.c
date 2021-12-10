#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int num;
    printf("\nEnter the number of the students : ");
    scanf("%d", &num);
    char NAME[num + 1][1000], ROLL[num + 1][1000];
    int i;
    for (i = 0; i < num; i++)
    {
        printf("\nFor student %d.", (i + 1));
        printf("\nEnter the name of the student : ");
        scanf(" %[^\n]%*c", NAME[i]);
        printf("Enter the roll no. of the student : ");
        scanf(" %[^\n]%*C", ROLL[i]);
    }
    system("cls");
    int choice;
    printf("\nSearch with...\n1. Name\n2. Roll No.");
    printf("\n\nEnter your choice : ");
    scanf("%d", &choice);
    system("cls");
    if (choice == 1)
    {
        char search[1000], lower_search[1000], lower_NAME[num + 1][1000];
        int STORE;
        printf("\nEnter the name of the student : ");
        scanf(" %[^\n]%*c", search);
        int j;
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < strlen(NAME[i]); j++)
            {
                lower_NAME[i][j] = tolower(NAME[i][j]);
            }
        }
        for (i = 0; i < strlen(search); i++)
        {
            lower_search[i] = tolower(search[i]);
        }
        for (i = 0; i < num; i++)
        {
            if (strcmp(lower_search, lower_NAME[i]) == 0)
            {
                STORE = i;
                break;
            }
        }
        system("cls");
        printf("\nThe roll no of the student : %s\n\n", ROLL[STORE]);
    }

    if (choice == 2)
    {
        char search[1000], lower_search[1000], lower_ROLL[num + 1][1000];
        int STORE;
        printf("\nEnter the roll no. of the student : ");
        scanf(" %[^\n]%*c", search);
        int j;
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < strlen(ROLL[i]); j++)
            {
                lower_ROLL[i][j] = tolower(ROLL[i][j]);
            }
        }
        for (i = 0; i < strlen(search); i++)
        {
            lower_search[i] = tolower(search[i]);
        }
        for (i = 0; i < num; i++)
        {
            if (strcmp(lower_search, lower_ROLL[i]) == 0)
            {
                STORE = i;
                break;
            }
        }
        system("cls");
        printf("\nThe name of the student : %s\n\n", NAME[STORE]);
    }
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    system("cls");
    return 0;
}