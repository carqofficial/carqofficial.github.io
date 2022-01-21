#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num, num_sqr, qun, i;
    printf("\nHow many numbers will be entered : ");
    scanf("%d", &qun);
    /*printf("%d", qun);*/
    FILE *f1, *f2;
    printf("\nEnter the numbers : ");
    f1 = fopen("FULL_INT", "w");
    for (i = 0; i < qun; i++)
    {
        scanf("%d", &num);
        fprintf(f1, "%d ", num);
        /*printf("%d", i);*/
    }
    fclose(f1);

    f1 = fopen("FULL_INT", "r");
    f2 = fopen("FULL_SQR", "w");
    for (i = 0; i < qun; i++)
    {
        fscanf(f1, "%d", &num);
        num_sqr = pow(num, 2);
        fprintf(f2, "%d ", num_sqr);
    }
    printf("\nSquare of the numbers are stored in another file successfully.\n\n");
    fclose(f1);
    fclose(f2);
    return 0;
}