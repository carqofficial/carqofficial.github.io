#include <stdio.h>
#include <string.h>

typedef struct
{
    char product_code[1000];
    double product_cost;
    int product_quantity;
} ITEM_DET;

int main()
{
    int item_num;
    printf("\nTotal item number : ");
    scanf("%d", &item_num);
    ITEM_DET item[item_num];
    FILE *fp;
    fp = fopen("ITEM DETAILS", "w");
    char prt[1000];
    int i;
    for (i = 0; i < item_num; i++)
    {
        printf("\nFor item %d : ", i + 1);
        printf("\nProduct code : ");
        scanf(" %[^\n]%*c", (item[i]).product_code);
        printf("Product cost : ");
        scanf("%lf", &(item[i]).product_cost);
        printf("Product quantity : ");
        scanf("%d", &(item[i]).product_quantity);
        fprintf(fp, "Item %d : \n", (i + 1));
        strcpy(prt, "Product Code     : ");
        fprintf(fp, "%s", prt);
        fprintf(fp, "%s\n", (item[i]).product_code);
        strcpy(prt, "Product Cost     : ");
        fprintf(fp, "%s", prt);
        fprintf(fp, "%.2lf\n", (item[i]).product_cost);
        strcpy(prt, "Product quantity : ");
        fprintf(fp, "%s", prt);
        fprintf(fp, "%d\n\n", (item[i]).product_quantity);
        /*
        Here fwrite(&s,sizeof(s),1,fp); --> can be used.
        https://scanftree.com/programs/c/c-program-for-operations-of-sequential-file-with-records/
        */
    }
    fclose(fp);
    printf("\nItem Details are saved successfully.\n\n");
    return 0;
}