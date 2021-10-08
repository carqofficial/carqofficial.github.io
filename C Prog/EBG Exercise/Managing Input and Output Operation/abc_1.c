#include <stdio.h>

int main()
{
    char fname, line[100];
    fname = ' ';
    int i = 0;
    printf("\nYour name : ");
    while (fname != '\n')
    {
        fname = getchar();

        line[i] = fname;
        i++;
    }
    line[i] = '\0';

    printf("\nYour name is %s\n\n", line);
    return 0;
}