#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void cut(char *special_char, char (*new)[], char (*cut_new)[1000])
{
    int i, j, len;
    j = 0;
    len = strlen(*new);
    /*printf("%d", len);*/
    for (i = 0; i < len; i++)
    {
        if (tolower((*new)[i]) != tolower(*special_char))
        {
            (*cut_new)[j] = (*new)[i];
        }
        else if (tolower((*new)[i]) == tolower(*special_char))
        {
            i++;
            (*cut_new)[j] = (*new)[i];
        }
        j++;
    }
    (*cut_new)[j] = '\0';
}

int main()
{
    char new[1000], special_char;
    printf("\nEnter the character string : ");
    scanf(" %[^\n]%*c", new);
    printf("Enter the charecter to be cut down : ");
    scanf("%c", &special_char);
    char cut_new[1000];
    cut(&special_char, &new, &cut_new);
    printf("\nThe string without '%c' : \"%s\"\n\n", special_char, cut_new);
    return 0;
}
