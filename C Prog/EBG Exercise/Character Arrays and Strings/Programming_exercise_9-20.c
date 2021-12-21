#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char str1[1000], str2[1000], new[1000];
    printf("\nEnter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    int i;
    for (i = 0; i < strlen(str1); i++)
    {
        new[i] = str1[i];
    }
    for (i = 0; i < strlen(str2); i++)
    {
        new[i + strlen(str1)] = str2[i];
    }
    new[strlen(str1) + strlen(str2)] = '\0';

    printf("\nThe concatenated string : %s\n\n", new);
    return 0;
}