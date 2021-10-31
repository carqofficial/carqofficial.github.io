#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double unit, charge_pu, charge, meter_charge, net_charge, charge_addi, charge_addi_rate;
    char name[500], month[500];
    int MONTH;

    time_t s, val = 1;
    struct tm *current_time;
    s = time(NULL);
    current_time = localtime(&s);
    MONTH = current_time->tm_mon + 1;

start:
    switch (MONTH)
    {
    case 1:
        strcpy(month, "January");
        break;
    case 2:
        strcpy(month, "February");
        break;
    case 3:
        strcpy(month, "March");
        break;
    case 4:
        strcpy(month, "April");
        break;
    case 5:
        strcpy(month, "May");
        break;
    case 6:
        strcpy(month, "June");
        break;
    case 7:
        strcpy(month, "July");
        break;
    case 8:
        strcpy(month, "August");
        break;
    case 9:
        strcpy(month, "September");
        break;
    case 10:
        strcpy(month, "October");
        break;
    case 11:
        strcpy(month, "November");
        break;
    case 12:
        strcpy(month, "December");
        break;
    }

    /*help --> 1. https://www.codevscolor.com/c-print-current-time-day-month-year
               2. https://www.w3resource.com/c-programming-exercises/conditional-statement/c-conditional-statement-exercises-23.php
               3. https://stackoverflow.com/questions/6008733/expression-must-be-a-modifiable-l-value
               4. https://stackoverflow.com/questions/18627163/yes-no-loop-in-c
               5. https://stackoverflow.com/questions/9347633/how-to-implement-press-any-key-to-exit/9347664
               6. https://stackoverflow.com/questions/29612201/implicit-declaration-of-function-getch/29612473
               7. https://stackoverflow.com/questions/18801483/press-any-key-to-continue-function-in-c/18801616
    */

    meter_charge = 100;
    printf("\nTo calculate you electric bill : ");
    printf("\nEnter your name : ");
    scanf(" %[^\n]%*c", name);
    printf("Enter the billed electricity unit for %s : ", month);
    scanf(" %lf", &unit);

    if (unit <= 400)
    {
        if (unit <= 300)
        {
            if ((unit <= 200) && (unit >= 0))
            {
                charge_pu = 0.80;
                charge_addi_rate = 0;
            }
            else if (unit > 200)
            {
                charge_pu = 0.90;
                charge_addi_rate = 0;
            }
            else if (unit < 0)
            {
                printf("\nWrong input!\n");
                goto start;
            }
        }
        else if (unit > 300)
        {
            charge_pu = 1;
            charge_addi_rate = 0;
        }
    }

    else if (unit > 400)
    {
        charge_pu = 1;
        charge_addi_rate = 0.15;
    }

    charge = (unit * charge_pu);
    charge_addi = (charge * charge_addi_rate);
    net_charge = (charge + charge_addi);

    if (charge_addi == 0)
    {
        int unit_dub, count;
        if (unit >= net_charge)
        {
            unit_dub = (int)unit;
        }
        else if (unit < net_charge)
        {
            unit_dub = (int)net_charge;
        }
        count = 0;
        while (unit_dub != 0)
        {
            count++;
            unit_dub /= 10;
        }
        printf("\n\nYour name : %s", name);
        printf("\nYour billed electricity unit : %*.2lf", (count + 4), (unit + 0.0045));
        printf("\n----------------------------------------------");
        int j;
        for (j = 1; j <= (2 * count); j++)
        {
            printf("-");
        }
        printf("\nCharge for billed electricity unit : Rs %*.2lf", (count + 4), (net_charge + 0.0045));
        printf("\n----------------------------------------------");
        for (j = 1; j <= (2 * count); j++)
        {
            printf("-");
        }

        printf("\nYour payable amount                : Rs %*.2lf", (count + 4), (net_charge + 0.0045));
        /*printf("\ncount = ", count);*/
    }
    else if (charge_addi != 0)
    {
        double unit_dub_float;
        int unit_dub, count;
        unit_dub_float = (unit > net_charge) ? ((unit > charge_addi) ? unit : charge_addi) : net_charge;
        unit_dub = (int)unit_dub_float;
        count = 0;
        while (unit_dub != 0)
        {
            count++;
            unit_dub /= 10;
        }
        printf("\n\nYour name : %s", name);
        printf("\nYour billed electricity unit : %*.2lf", (count + 4), (unit + 0.0045));
        printf("\n----------------------------------------------");
        int j;
        for (j = 1; j <= (2 * count); j++)
        {
            printf("-");
        }
        printf("\nCharge for billed electricity unit : Rs %*.2lf", (count + 4), (charge + 0.0045));
        printf("\nAdditional charge                  : Rs %*.2lf", (count + 4), (charge_addi + 0.0045));
        printf("\n----------------------------------------------");
        for (j = 1; j <= (2 * count); j++)
        {
            printf("-");
        }

        printf("\nYour payable amount                : Rs %*.2lf", (count + 4), (net_charge + 0.0045));
        /*printf("\ncount = %d", count);*/
    }

    printf("\n\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}
