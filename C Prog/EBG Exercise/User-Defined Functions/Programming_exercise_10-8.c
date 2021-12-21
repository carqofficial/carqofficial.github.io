#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void UPPER_converter(char str[])
{
    system("cls");
    int len = strlen(str);
    int i;
    char lower[len + 1];
    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            lower[i] = toupper(str[i]);
        }
        else
        {
            lower[i] = str[i];
        }
    }
    lower[len] = '\0';
    printf("\nThe string after converting it to uppercase : %s\n\n", lower);
}

int main()
{
    char input[1000];
    printf("\nEnter the string : ");
    scanf(" %[^\n]%*c", input);
    UPPER_converter(input);
    return 0;
}