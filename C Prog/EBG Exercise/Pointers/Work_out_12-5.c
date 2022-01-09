#include <stdio.h>

int main()
{
    char *name;
    int length;
    name = "DELHI";
    char *cptr = name;
    printf("\n%s", name);
    while (*cptr != '\0')
    {
        printf("\n%c is stored at the address %u\n", *cptr, cptr);
        cptr++;
    }
    length = cptr - name;
    printf("\nLength of the string = %d\n\n", length);
}