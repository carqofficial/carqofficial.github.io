#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int m, n;
    printf("\nEnter the position from where the extraction of the string should be started : ");
    scanf("%d", &n);
    printf("Enter the number of the string to be extracted : ");
    scanf("%d", &m);
    char str[1000];
    printf("\nEnter the string : ");
    scanf(" %[^\n]%*c", str);

    printf("\nExtracted string : \n\"");
    for (int i = n - 1; i <= m + n - 1; i++)
    {
        printf("%c", str[i]);
    }
    printf("\"");
    printf("\n\n");
    return 0;
}