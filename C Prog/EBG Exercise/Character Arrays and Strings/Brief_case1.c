#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char LINE[5000];
    int word_count = 0, line_count = 0;
    int len = strlen(LINE);
    printf("\nPress Return key after complete writing.");
    printf("\nAlways give space after '.'");
    printf("\nAlways give full stop after completing a line");
    printf("\n\nEnter the text : ");
    gets(LINE);
    int i;
    if (LINE[strlen(LINE) - 1] != '.')
    {
        LINE[strlen(LINE)] = '.';
        LINE[strlen(LINE) + 1] = '\0';
    }
    else
    {
        LINE[strlen(LINE)] = '\0';
    }
    for (i = 0; i <= strlen(LINE); i++)
    {
        /*if ((LINE[i] == '\n') || (LINE[i] == ' ') || (LINE[i] == '\0') || (LINE[i] == '\t') || (LINE[i] == '.'))*/
        if ((LINE[i] == ' ') || (LINE[i] == '\t') || (LINE[i] == '\0'))
        {
            word_count++;
        }
        if ((LINE[i] == '.'))
        {
            line_count++;
        }
    }
    system("cls");
    printf("\nEntered text : \"", LINE);
    if (LINE[len] == '\0')
    {
        for (i = 0; i < strlen(LINE); i++)
        {
            printf("%c", LINE[i]);
        }
    }
    printf("\"");
    printf("\n\nNumbers of words in this text : %d", word_count);
    printf("\nNumbers of Lines in this text : %d", line_count);
    printf("\n\n");
    printf("\npress any key to exit.....");
    getch();
    printf("\n\n");

    return 0;
}