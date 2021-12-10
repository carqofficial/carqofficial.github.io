#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char TEXT[1000], alphabet;
    printf("\nEnter the text : ");
    gets(TEXT);
    int i, j, k;
    int count[1000] = {0};
    for (i = 0; i < strlen(TEXT); i++)
    {
        for (j = 32; j <= 126; j++)
        {
            alphabet = j;
            if (TEXT[i] == alphabet)
            {
                count[j]++;
            }
        }
        /*for (k = 'A'; k <= 'Z'; k++)
        {
            alphabet = k;
            if (TEXT[i] == alphabet)
            {
                count[k]++;
            }
        }*/
    }
    printf("\nRepeatation of the letters : ");

    for (j = 33; j <= 126; j++)
    {
        alphabet = j;
        if (count[j] != 0)
        {
            printf("\n%-5c --> %d", alphabet, count[j]);
        }
    }
    if (count[32] != 0)
    {
        printf("\nSpace --> %d", count[32]);
    }
    printf("\n\n");
    return 0;
}