#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int find(char str_1[], char s_str)
{
    int len, i, count;
    count = 0;
    len = strlen(str_1);
    for (i = 0; i < len; i++)
    {
        if (str_1[i] == s_str)
        {
            count++;
        }
    }
    if (count > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[1000], s_char;
    printf("\nEnter the string : ");
    gets(str);
    str[strlen(str)] = '\0';
    printf("Enter a single charecter : ");
    s_char = getchar();
    printf("\n%d\n\n", find(str, s_char));
    return 0;
}