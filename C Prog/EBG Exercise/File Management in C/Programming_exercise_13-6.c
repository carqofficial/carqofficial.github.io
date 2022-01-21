#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char c;
    printf("\nEnter the text of source file : ");
    f1 = fopen("SOURCE_FILE", "w");
    while ((c = getchar()) != EOF)
    {
        fprintf(f1, "%c", c);
    }
    fclose(f1);

    f1 = fopen("SOURCE_FILE", "r");
    f2 = fopen("SECONDARY_FILE", "w");
    while ((fscanf(f1, "%c", &c)) != EOF)
    {
        fprintf(f2, "%c", c);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}