#include <stdio.h>

void sorting_num(int *num, int (*sort)[1000])
{
    int min, pos_min, i, j, temp;
    for (i = 0; i < ((*num) - 1); i++)
    {
        for (j = 0; j < ((*num) - 1 - i); j++)
        {
            if ((*sort)[j] > (*sort)[j + 1])
            {
                temp = (*sort)[j];
                (*sort)[j] = (*sort)[j + 1];
                (*sort)[j + 1] = temp;
            }
        }
    }
}

int main()
{
    FILE *f1, *f2, *f3;
    int num;
    char c;
    printf("\nEnter the integers for DATA1 file : ");
    f1 = fopen("DATA1", "w");
    while ((scanf("%d", &num)) != EOF)
    {
        fprintf(f1, "%d ", num);
    }
    fclose(f1);
    printf("\nEnter the intergers for DATA2 file : ");
    f2 = fopen("DATA2", "w");
    while ((scanf("%d", &num)) != EOF)
    {
        fprintf(f2, "%d ", num);
    }
    fclose(f2);

    f1 = fopen("DATA1", "r");
    f2 = fopen("DATA2", "r");
    f3 = fopen("DATA", "w");
    long n1, n2;
    int sorting[1000], i;
    n1 = ftell(f1);
    n2 = ftell(f2);
    num = 0;
    while (fscanf(f1, "%d", &sorting[num]) != EOF)
    {
        num++;
    }
    while (fscanf(f2, "%d", &sorting[num]) != EOF)
    {
        num++;
    }
    sorting_num(&num, &sorting);
    for (i = 0; i < num; i++)
    {
        fprintf(f3, "%d ", sorting[i]);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}