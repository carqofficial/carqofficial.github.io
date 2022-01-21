#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    printf("\nEnter the data : ");
    char c;
    f1 = fopen("My name", "w");
    while ((c = getchar()) != EOF)
    {
        putc(c, f1);
    }
    fclose(f1);
    f1 = fopen("My name", "r");
    f2 = fopen("Data_copy", "w");
    while (feof(f1) == 0)
    {
        c = getc(f1);
        putc(c, f2);
    }
    fclose(f2);
    fclose(f1);
    printf("\nCopied data : ");
    f2 = fopen("Data_copy", "r");
    while (feof(f2) == 0)
    {
        c = getc(f2);
        printf("%c", c);
    }
    fclose(f2);
    return 0;
}