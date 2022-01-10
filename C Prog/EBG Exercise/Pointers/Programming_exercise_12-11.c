#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void adder(char (*main_str)[], char (*sub_str)[])
{
    int len_main, len_sub, i;
    len_main = strlen(*main_str);
    len_sub = strlen(*sub_str);
    for (i = len_main; i <= len_sub + len_main - 1; i++)
    {
        (*main_str)[i] = (*sub_str)[i - len_main];
    }
    (*main_str)[len_main + len_sub] = '\0';
}

int main()
{
    char main_str[1000], sub_str[1000];
    printf("\nEnter the string : ");
    gets(main_str);
    printf("Enter the sub-string : ");
    gets(sub_str);
    adder(&main_str, &sub_str);
    printf("\nThe main string after adding sub-string : %s\n\n", main_str);
    return 0;
}