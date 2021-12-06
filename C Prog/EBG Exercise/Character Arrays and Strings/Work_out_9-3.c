#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000], one_ch;
    printf("\nEnter the first string : ");
    int i = 0;
    do
    {
        one_ch = getchar();
        string1[i] = one_ch;
        i++;
    } while (one_ch != '\n');
    int j = i - 1;
    string1[j] = '\0';
    system("cls");
    printf("\nstring1 : \"%s\"", string1);
    /*printf("\nstring1 : \"%s\"", string1[i - 1]);*/
    for (int k = 0; k < i; k++)
    {
        string2[k] = string1[k];
    }
    printf("\nstring2 : \"%s\"\n\n", string2);
    return 0;
}