#include <stdio.h>

int main()
{
    FILE *f1;
    char NAME[1000];
    char c;
    printf("\nEnter the file name : ");
    scanf("%s", &NAME);
    printf("\nEnter the data : ");
    f1 = fopen(NAME, "w");
    while ((c = getchar()) != EOF)
    {
        fprintf(f1, "%c", c);
    }
    fclose(f1);
    f1 = fopen(NAME, "r");
    printf("\n");
    long off;
    printf("\nEnter the value of offset : ");
    scanf("%ld", &off);
    long n;
    n = 0;
    do
    {
        fscanf(f1, "%c", &c);
        fprintf(stdout, "%c", c);
        fseek(f1, 0L, 1);
        n = n + 1;
    } while (n <= off);
    printf("\n");
    fclose(f1);
    return 0;
}