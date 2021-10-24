#include <stdio.h>
#include <conio.h>

int main()
{
    double PROFIT, MRP, SELL_P, PROFIT_RND;
    int RSP;
TOP:
    printf("\nEnter the cost price of the product : ");
    scanf("%lf", &MRP);
    printf("Enter the selling price of the product : ");
    scanf("%lf", &SELL_P);
    if (MRP >= SELL_P)
    {
        PROFIT = MRP - SELL_P;
        PROFIT_RND = (PROFIT + 0.0045);
        printf("\nYou have lose of Rs. %.2lf on this product\n", PROFIT_RND);
    }

    else if (MRP <= SELL_P)
    {
        PROFIT = SELL_P - MRP;
        PROFIT_RND = (PROFIT + 0.0045);
        printf("\nYou have profit of Rs. %.2lf on this product\n", PROFIT_RND);
    }

    printf("\nDo you want to calculate profit once more?");
WRN_TYPE:
    printf("\n------------------------------------------");
    printf("\n1 --> Yes\n2 --> No");
    printf("\n------------------------------------------");
    printf("\nEnter 1 or 2 according to your choice : ");
    scanf("%d", &RSP);

    if (RSP == 1)
    {
        printf("Your answer == Yes\n");
        goto TOP;
    }
    else if (RSP == 2)
    {
        printf("Your answer == No\n");
        goto END;
    }
    else if ((RSP != 1) && (RSP != 2))
    {
        printf("\nWrong Input!!");
        goto WRN_TYPE;
    }
END:
    printf("\nPress any key to exit.......");
    getch();
    printf("\n\n");
    return 0;
}