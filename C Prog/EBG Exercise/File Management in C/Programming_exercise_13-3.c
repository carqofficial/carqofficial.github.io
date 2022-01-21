#include <stdio.h>

int compare(int *num1, int *num2, FILE *f1, FILE *f2)
{
    char cf1, cf2;
    int count, ret, new;
    count = 0;
    if ((*num1) == (*num2))
    {
        do
        {
            cf1 = fgetc(f1);
            cf2 = fgetc(f2);
            /*printf("\n%c %c", cf1, cf2);*/
            if (cf2 == cf1)
            {
                count++;
            }

        } while ((cf1 != EOF) && (cf2 != EOF));
        /*printf("\n%d %d %d", *num1, *num2, count - 1);*/
        ret = (((count - 1) == (*num1)) && ((count - 1) == (*num2))) ? 0 : 1;
    }

    else if ((*num1) != (*num2))
    {
        count = 0;
        ret = 1;
    }

    return (ret);
}

int main()
{
    FILE *f1, *f2;
    char c;
    int num1, num2;
    char comp[1000];
    num1 = 0;
    num2 = 0;

    f1 = fopen("DATA_EN1", "w");
    f2 = fopen("DATA_EN2", "w");
    printf("\nEnter the data of first file : ");
    while ((c = getchar()) != EOF)
    {
        fprintf(f1, "%c", c);
        num1++;
    }
    printf("\nEnter the data of second file : ");
    while ((c = getchar()) != EOF)
    {
        fprintf(f2, "%c", c);
        num2++;
    }
    fclose(f1);
    fclose(f2);
    f1 = fopen("DATA_EN1", "r");
    f2 = fopen("DATA_EN2", "r");
    int what_cmp_val;
    what_cmp_val = compare(&num1, &num2, f1, f2);
    if (what_cmp_val == 0)
    {
        printf("\nTwo files are identical.\n\n");
    }
    else if (what_cmp_val == 1)
    {
        printf("\nTwo files are not identical.\n\n");
    }
    fclose(f1);
    fclose(f2);
    return 0;
}