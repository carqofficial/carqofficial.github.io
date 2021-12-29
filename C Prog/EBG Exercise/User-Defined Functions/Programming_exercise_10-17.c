#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void locate(char str_1[], char str_2[], int place)
{
    char strcopy[1000];
    int j;
    if (place < strlen(str_1))
    {
        for (j = 0; j < place; j++)
        {
            strcopy[j] = str_1[j];
        }
        strcopy[place] = '\0';
    }
    else if (place > strlen(str_1))
    {
        for (j = 0; j < place; j++)
        {
            if (j < strlen(str_1))
            {
                strcopy[j] = str_1[j];
            }
            else if (j >= strlen(str_1))
            {
                strcopy[j] = ' ';
            }
        }
        strcopy[place] = '\0';
    }
    strcat(strcopy, str_2);
    printf("\nString after catination (as mention in the question) : %s\n\n", strcopy);
}

int main()
{
    char str1[1000], str2[1000];
    int m;
    printf("\nEnter the string 1 : ");
    gets(str1);
    str1[strlen(str1)] = '\0';
    printf("Enter the string 2 : ");
    gets(str2);
    str2[strlen(str2)] = '\0';
    printf("Enter an integer : ");
    scanf("%d", &m);
    locate(str1, str2, m);
    return 0;
}
