#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str1[1000], str2[1000];
    int START, NUM;
    printf("\nEnter the string : ");
    gets(str1);
    printf("Enter the starting position for copying text : ");
    scanf("%d", &START);
    printf("Enter the number of the charecters to be copied : ");
    scanf("%d", &NUM);
    int i;
    for (i = (START - 1); i <= (START + NUM - 1); i++)
    {
        str2[i - (START - 1)] = str1[i];
    }
    str2[NUM + 1] = '\0';
    printf("\nThe copied string is : %s\n\n", str2);
    return 0;
}