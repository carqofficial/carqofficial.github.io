#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str1[1000], str2[1000], str3[1000];
    printf("\nEnter the string 1 : ");
    scanf(" %[^\n]%*c", str1);
    printf("Enter the string 2 : ");
    scanf(" %[^\n]%*c", str2);

    if (strcmp(str1, str2) != 0)
    {
        strcat(str1, str2);
    }

    strcpy(str3, str1);
    printf("\n\nString 1 : %s, length : %d", str1, strlen(str1));
    printf("\nString 2 : %s, length : %d", str2, strlen(str2));
    printf("\nString 3 : %s, length : %d\n\n", str3, strlen(str3));
    return 0;
}