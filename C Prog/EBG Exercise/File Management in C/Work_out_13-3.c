#include <stdio.h>

int main()
{
    FILE *f1;
    int number, quantity, i;
    double price, value;
    char name[1000];
    int num_item;
    printf("\nHow many number of the items' data will be entered : ");
    scanf("%d", &num_item);
    f1 = fopen("list", "w");
    printf("\nEnter the items' datas : ");
    for (i = 0; i < num_item; i++)
    {
        printf("\nFor intem %d : ", i + 1);
        printf("\nName Number Price Quantity : ");
        fscanf(stdin, "%s %d %lf %d", name, &number, &price, &quantity);
        fprintf(f1, "%s %d %lf %d", name, number, price, quantity);
    }
    fclose(f1);
    fprintf(stdout, "\n\n");
    printf("\nName       Number     Price      Quantity   Value\n");
    f1 = fopen("list", "r");
    for (i = 0; i < num_item; i++)
    {
        fscanf(f1, "%s %d %lf %d", name, &number, &price, &quantity);
        value = price * quantity;
        fprintf(stdout, "%-10s %-10d %-10.2lf %-10d %-10.2lf\n", name, number, price, quantity, value);
    }
    fclose(f1);
    printf("\n");
    return 0;
}