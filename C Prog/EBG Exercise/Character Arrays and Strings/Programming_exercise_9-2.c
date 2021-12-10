#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ANS[1000], TEMP[1000];
    printf("\nWho is the inventer of C ? ");
    gets(ANS);
    for (int i = 0; i < strlen(ANS); i++)
    {
        TEMP[i] = tolower(ANS[i]);
    }
    TEMP[strlen(ANS)];
    if ((strcmp(TEMP, "dennis ritchie") == 0))
    {
        printf("\nGood\n\n");
    }
    else if (strcmp(TEMP, "dennis ritchie") != 0)
    {
        printf("\nTry again!\n\n");
    }
    return 0;
}