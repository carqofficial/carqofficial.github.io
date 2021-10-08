#include<stdio.h>
#include<math.h>

int main()
{
    double demand_rate, setup_cost, holding_cost;
    double EOQ, TBO, EOQ2, TBO2;

    printf("\nPlease enter the holding cost per unit time : ");
    scanf("%lf", &holding_cost);

    printf("Please enter the setup cost : ");
    scanf("%lf", &setup_cost);

    printf("Please enter the demand rate : ");
    scanf("%lf", &demand_rate);

    EOQ2 = ((2*demand_rate*setup_cost)/holding_cost);
    TBO2 = ((2*setup_cost)/(demand_rate*holding_cost));
    EOQ = sqrt(EOQ2);
    TBO = sqrt(TBO2);
    printf("\nEOQ value : %lf", EOQ);
    printf("\nTBO value : %lf\n\n", TBO);

    return 0;
}