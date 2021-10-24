#include <stdio.h>
#include <ctype.h>

int main()
{
    char enter;
    printf("\nEnter a alphabet : ");
    /*putchar('\n');*/
    enter = getchar();

    if (islower(enter) > 0)
    {
        printf("Converting the lowercase charecter to uppercase : ");
        putchar(toupper(enter));
        printf("\n\n");
    }
    else if (isupper(enter) > 0)
    {
        printf("Coverting the uppercase charecter to lowercase : ");
        putchar(tolower(enter));
        printf("\n\n");
    }
    return 0;
}