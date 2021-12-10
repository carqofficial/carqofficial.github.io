#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n;
    printf("\nEnter the entries : ");
    scanf("%d", &n);
    system("cls");
    char vehicle_type[n + 1][1000], month_of_sales[n + 1][1000], vehicle_price[n + 1][1000];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n%d.Enter the vehicle type   : ", (i + 1));
        scanf(" %[^\n]%*c", vehicle_type[i]);
        printf("%d.Enter the Month of sales : ", (i + 1));
        scanf(" %[^\n]%*c", month_of_sales[i]);
        printf("%d.Enter the vehicle price  : ", (i + 1));
        scanf(" %[^\n]%*c", vehicle_price[i]);
    }
    system("CLS");
    printf("\nVehicle Type          Month of sales          Price");
    for (i = 0; i < n; i++)
    {
        printf("\n%-22s%-24s%-15s", vehicle_type[i], month_of_sales[i], vehicle_price[i]);
    }
    printf("\n\n");
    return 0;
}