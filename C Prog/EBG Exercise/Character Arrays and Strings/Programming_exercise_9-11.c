#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str1[1000], str2[1000];
    printf("\nEnter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);

    if (strcmp(str1, str2) > 0)
    {
        printf("\nString 1 is greater than string 2.\n\n");
    }
    else if (strcmp(str1, str2) == 0)
    {
        printf("\nString 1 is equal to string 2.\n\n");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("\nString 1 is less than string 2.\n\n");
    }
    return 0;
}