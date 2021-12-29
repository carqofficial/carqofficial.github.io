#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void str_copy(char str_WC[], char str_TBC[])
{
    strcpy(str_WC, str_TBC);
    printf("\nThe first string (copied from the second string) : %s", str_WC);
}

void str_comparing(char str_1[], char str_2[])
{
    if (strcmp(str_1, str_2) > 0)
    {
        printf("\nFirst string is greater than second string.");
    }
    else if (strcmp(str_1, str_2) == 0)
    {
        printf("\nTwo strings are same.");
    }
    else if (strcmp(str_1, str_2) < 0)
    {
        printf("\nSecond string is greater than first string.");
    }
}

void str_catination(char str_main[], char str_cat[])
{
    strcat(str_main, str_cat);
    int len_main, len_cat;
    len_main = strlen(str_main);
    len_cat = strlen(str_cat);
    str_main[len_cat + len_main] = '\0';
    printf("\nThe string after catination is : %s", str_main);
}

int main()
{
    char str1[1000], str2[1000], strcopy[1000];
    printf("\nEnter the string 1 : ");
    gets(str1);
    str1[strlen(str1)] = '\0';
    printf("Enter the string 2 : ");
    gets(str2);
    str2[strlen(str2)] = '\0';
    str_copy(strcopy, str2);
    str_comparing(str1, str2);
    str_catination(str1, strcopy);
    printf("\n\n");
    return 0;
}