#include <stdio.h>
#include <string.h>

int main()
{
    char data[1000], c;
    int count, i;
    count = 0;
    FILE *f1, *f_temp;
    printf("\nEnter a text : ");
    f1 = fopen("DATA", "w");
    while ((c = getchar()) != EOF)
    {
        putc(c, f1);
        data[count] = c;
        count++;
    }
    fclose(f1);
    f_temp = fopen("TEMP", "w");
    for (i = count; i >= 0; i--)
    {
        putc(data[i], f_temp);
    }
    fclose(f_temp);
    f_temp = fopen("TEMP", "r");
    printf("\nPrinting the text  in reverse order : ");
    while ((c = getc(f_temp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(f_temp);
    printf("\n\n");
    return 0;
}