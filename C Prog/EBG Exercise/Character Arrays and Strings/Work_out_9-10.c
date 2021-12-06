#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[1000], str2[1000], lower_str1[1000];
    printf("\nEnter the string 1 : ");
    gets(str1);
    for (int i = 0; i < strlen(str1); i++)
    {
        lower_str1[i] = tolower(str1[i]);
    }
    strrev(strcpy(str2, lower_str1));
    /*printf("%s", str2);*/
    if (strcmp(str2, lower_str1) == 0)
    {
        printf("\nYou have entered : %s", str1);
        printf("\nYou have entered a palindrome word.\n\n");
    }

    else
    {
        printf("\nYour entered word is not a palindrome word.\n\n");
    }
    return 0;
}