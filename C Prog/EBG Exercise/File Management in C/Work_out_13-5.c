#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    long n;
    char c;
    f1 = fopen("NEW1", "w");
    while ((c = getchar()) != EOF)
    {
        putc(c, f1);
    }
    printf("\nNumber of charecters entered : %ld", ftell(f1));
    fclose(f1);
    n = 0L;
    f1 = fopen("NEW1", "r");
    while ((feof(f1)) == 0)
    {
        fseek(f1, n, 0);
        c = getc(f1);
        printf("\nPosition of %c is %d", c, ftell(f1));
        n = n + 1L;
    }

    putchar('\n\n');

    n = -2L;
    do
    {
        fseek(f1, n, 2);
        putchar(getc(f1));
        n = n - 1;
    } while (ftell(f1) != 1);
    fclose(f1);
    printf("\n\n");
    return 0;
}