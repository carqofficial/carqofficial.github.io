#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s, sen[100];
    int q;
    q = 0;
    s = ' ';
    printf("\nWhatever you want in lowercase : ");
    while (s != '\n')
    {
        s = getchar();
        s = putchar(toupper(s));
        sen[q] = s;
        q++;
    }
    sen[q] = '\0';
    printf("\nConverting the input yo uppercase : %s\n", sen);

    return 0;
}