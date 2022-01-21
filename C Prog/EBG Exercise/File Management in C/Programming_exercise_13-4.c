#include <stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    char c;

    f1 = fopen("FILE_EN1", "w");
    f2 = fopen("FILE_EN2", "w");
    int num, i;
    num = 0;
    printf("\nEnter the file 1 data : ");
    while ((c = getchar()) != EOF)
    {
        fprintf(f1, "%c", c);
    }
    printf("\nEnter the file 2 data : ");
    while ((c = getchar()) != EOF)
    {
        fprintf(f2, "%c", c);
    }
    fclose(f1);
    fclose(f2);

    f1 = fopen("FILE_EN1", "r");
    f2 = fopen("FILE_EN2", "r");
    int data[2000];
    while ((fscanf(f1, "%c", &c)) != EOF)
    {
        data[num] = c;
        num++;
    }
    while ((fscanf(f2, "%c", &c)) != EOF)
    {
        data[num] = c;
        num++;
    }

    fclose(f1);
    fclose(f2);

    f1 = fopen("FILE_EN1", "w");
    for (i = 0; i < num; i++)
    {
        fprintf(f1, "%c", data[i]);
    }
    fclose(f1);

    return 0;
}