#include<stdio.h>

int main()
{
    double depreciation, prprice, salvalue;
    int yearser;

    printf("\nEnter the value of Depreciation : ");
    scanf("%lf", &depreciation);
    printf("Enter the value of Purchase Price : ");
    scanf("%lf", &prprice);
    printf("Enter the years of service : ");
    scanf("%d", &yearser);
    salvalue = (prprice - (depreciation*(double)yearser));
    printf("\nValue of Salvage value : %lf\n\n", salvalue);


    return 0;
}