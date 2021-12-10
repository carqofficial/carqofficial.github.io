#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[1000], lower_str[1000], rev_str[1000];
    printf("\nEnter the word : ");
    gets(string);

    int i;
    for (i = 0; i < strlen(string); i++)
    {
        lower_str[i] = tolower(string[i]);
    }
    strrev(strcpy(rev_str, lower_str));

    if (strcmp(lower_str, rev_str) == 0)
    {
        printf("\nEntered word is palindrome.\n\n");
    }
    else
    {
        printf("\nEntered word is not a palindrome.\n\n");
    }
    return 0;
}