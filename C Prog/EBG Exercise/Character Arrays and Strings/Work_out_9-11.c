#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char string[5][1000], temp[1000];
    printf("\n");
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the item no. %d : ", i + 1);
        scanf(" %[^\n]%*c", string[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            char lower[2][1000];
            int k;
            for (k = 0; k <= strlen(string[j]); k++)
            {
                lower[1][k] = tolower(string[j][k]);
            }
            for (k = 0; k <= strlen(string[j]); k++)
            {
                lower[2][k] = tolower(string[j + 1][k]);
            }
            if (strcmp(string[j], string[j + 1]) > 0)
            {
                strcpy(temp, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp);
            }
        }
    }
    printf("\n\nPrinting items in alphabetical order : ");
    for (i = 0; i < 5; i++)
    {
        printf("\n%s", string[i]);
    }
    printf("\n\n");
    printf("\npress any key  to exit.....");
    getch();
    printf("\n\n");
    return 0;
}