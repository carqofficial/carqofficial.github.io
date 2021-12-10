#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[1000], str2[1000];
    printf("\nEnter the string : ");
    gets(str1);
    printf("Enter the substring : ");
    gets(str2);
    char NEW[1000];
    int count = 0;
    int i;
    for (i = 0; i < strlen(str1); i++)
    {
        NEW[i] = str1[i];
    }
    NEW[strlen(str1)] = '\0';
Again:
    strcpy(NEW, strstr(NEW, str2));
    if (NEW == NULL)
    {
        goto NEXT;
    }
    printf("\n%s", NEW);
    count++;
    /*printf("\n%d", count_verify);*/
    char TEMP[1000];
    for (i = 0; i < strlen(NEW); i++)
    {
        TEMP[i] = NEW[i];
    }
    TEMP[strlen(NEW)] = '\0';
    for (i = 0; i < (strlen(NEW) - ((strlen(str2) - 1))); i++)
    {
        NEW[i] = TEMP[i + (strlen(str2) - 1)];
    }
    NEW[strlen(NEW) - strlen(str2) + 1] = '\0';
    goto Again;
NEXT:
    printf("\nNumber of occurences : %d\n\n", count);
    return 0;
}