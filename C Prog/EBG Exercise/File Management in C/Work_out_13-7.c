#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fs;
    char str[100];
    int i, n, j;
    if (argc != 3)
    {
        puts("Improper number of arguments.");
        exit(0);
    }
    n = atoi(argv[2]);
    fs = fopen(argv[1], "r");
    if (fs == NULL)
    {
        printf("\nSource file cannot be opened.");
        exit(0);
    }
    i = 0;
    while (1)
    {
        if ((str[i] = fgetc(fs)) != EOF)
        {
            j = i + 1;
        }
        else
        {
            break;
        }
    }
    fclose(fs);
    fs = fopen(argv[1], "w");
    if (n < 0 || n > strlen(str))
    {
        printf("\nIncorrect value of n. Program will be terminated.....");
        exit(1);
    }
    j = strlen(str);
    for (i = 1; i <= n; i++, j--)
    {
        fputc(str[j], fs);
    }
    fclose(fs);
    printf("\n%d charecters of the file successfully printed in reverse order.", n);

    return 0;
}