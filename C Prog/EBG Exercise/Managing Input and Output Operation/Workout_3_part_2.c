#include <stdio.h>
#include <ctype.h>

int main()
{
    char enter, sen[100];
    enter = ' ';
    int i = 0;
    printf("\nEnter what you want in uppercase : ");

    while (enter != '\n')
    {
        enter = getchar();
        enter = putchar(tolower(enter));
        sen[i] = enter;
        i++;
    }

    sen[i] = '\0';
    printf("\nConverting the input to lowercase : %s\n\n", sen);

    return 0;
}