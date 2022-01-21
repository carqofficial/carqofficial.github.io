#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *f1, *f2;
    int i, num;
    f1 = fopen("NEW", "w");
    for (i = 0; i <= 100; i++)
    {
        putw(i, f1);
    }
    fclose(f1);
    f2 = fopen("NEW", "r");
    if (f2 == NULL)
    {
        printf("\nError while opening the file!!\n");
        exit(0);
    }
    printf("\n");
    for (i = 10; i <= 20; i++)
    {
        num = getw(f2);
        if (feof(f2))
        {
            printf("\nRan out of data.");
        }
        else
        {
            printf("%d", num);
        }
    }
    fclose(f2);
    printf("\n\n");
    return 0;
}