#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char TEXT[1000], REPLACE_WORD[1000], FIND_WORD[1000];
    printf("\nEnter the text : ");
    gets(TEXT);
AGAIN:
    printf("Enter the word to replace : ");
    gets(FIND_WORD);
    printf("Enter the word to be replaced : ");
    gets(REPLACE_WORD);
    int start_replace;
    int i, j;
    for (i = 0; i < strlen(TEXT); i++)
    {
        if (TEXT[i] == FIND_WORD[0])
        {
            start_replace = i;
            break;
        }
    }
    int match = 0;
    for (i = start_replace; i < (start_replace + strlen(FIND_WORD)); i++)
    {
        if (TEXT[i] == FIND_WORD[i - start_replace])
        {
            match++;
        }
    }
    if (match != strlen(FIND_WORD))
    {
        system("cls");
        printf("\nUnable to find the word to replace!!\nEnter the correct word\n");
        goto AGAIN;
    }
    system("cls");
    char part_1[1000], part_2[1000];
    for (i = 0; i < start_replace; i++)
    {
        part_1[i] = TEXT[i];
    }
    for (i = (strlen(FIND_WORD) + start_replace); i < strlen(TEXT); i++)
    {
        part_2[i - (strlen(FIND_WORD) + start_replace)] = TEXT[i];
    }
    part_2[strlen(TEXT) - (strlen(FIND_WORD) + start_replace)] = '\0';
    strcat(strcat(part_1, REPLACE_WORD), part_2);
    int len = strlen(part_1);
    part_1[len] = '\0';
    printf("\nText After Replacing the word : \"%s\"\n\n", part_1);
    printf("\nEnter any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}