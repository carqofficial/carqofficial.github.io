#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    int c, num, num_num;
    num = 0;
    f1 = fopen("TEST_12", "w");
    printf("\nHow many numbers do you want to enter : ");
    scanf("%d", &num_num);
    int i;
    printf("\nEnter the integers : ");
    for (i = 0; i < num_num; i++)
    {
        scanf("%d", &c);
        putw(c, f1);
    }
    fclose(f1);
    f1 = fopen("TEST_12", "r");
    f2 = fopen("TEST_12_LOAD", "w");
    int arr[num_num + 1];
    for (i = 0; i < num_num; i++)
    {
        arr[i] = getw(f1);
    }

    for (i = (num_num - 1); i >= 0; i--)
    {
        putw(arr[i], f2);
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("TEST_12_LOAD", "r");
    printf("\nNumbers stored in another file in reverse order : ");
    while ((c = getw(f2)) != EOF)
    {
        printf("%d ", c);
    }
    fclose(f2);
    printf("\n\n");
    return 0;
}