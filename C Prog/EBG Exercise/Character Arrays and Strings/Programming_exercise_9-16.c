#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str1[1000], str2[1000];
    printf("\nEnter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    int i = 0;
    while (((str1[i] == '\0') || (str2[i] == '\0')) && (str1[i] == str2[i]))
    {
        i++;
    }
    if (str1[i] > str2[i])
    {
        printf("\nString 1 is greater than string 2.\n\n");
    }
    else if (str1[i] < str2[i])
    {
        printf("\nString 1 is less than string 2.\n\n");
    }

    else if (str1[i] == str2[i])
    {
        printf("\nString 1 is equal to string 2.\n\n");
    }
    return 0;
}
