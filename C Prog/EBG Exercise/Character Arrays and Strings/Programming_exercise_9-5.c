#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000], temp[1000], t;
    printf("\nEnter the string : ");
    scanf(" %[^\n]%*c", str);
    int i, j;
    int len = strlen(str);

    for (i = 0; i < (len - 1); i++)
    {
        for (j = 0; j < (len - 1 - i); j++)
        {
            if (tolower(str[j]) > tolower(str[j + 1]))
            {
                t = str[j];
                str[j] = str[j + 1];
                str[j + 1] = t;
            }
        }
    }

    printf("\nThe string after arranging the letters in alphabetical order : %s\n\n", str);
    return 0;
}