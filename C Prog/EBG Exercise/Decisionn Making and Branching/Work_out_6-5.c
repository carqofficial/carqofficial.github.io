#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    double bill, consp, per_u, EXTRA, bill_rounded;
    int MONTH, USR;
    char mnth[500];
    /*char mnth[500], USR[500];*/
    time_t s, val = 1;
    struct tm *current_time;
    s = time(NULL);
    current_time = localtime(&s);
    MONTH = current_time->tm_mon + 1;
    /*printf("%d", current_time->tm_mon + 1);*/
AGAIN:
    switch (MONTH)
    {
    case 1:
        strcpy(mnth, "January");
        break;
    case 2:
        strcpy(mnth, "February");
        break;
    case 3:
        strcpy(mnth, "March");
        break;
    case 4:
        strcpy(mnth, "April");
        break;
    case 5:
        strcpy(mnth, "May");
        break;
    case 6:
        strcpy(mnth, "June");
        break;
    case 7:
        strcpy(mnth, "July");
        break;
    case 8:
        strcpy(mnth, "August");
    case 9:
        strcpy(mnth, "September");
        break;
    case 10:
        strcpy(mnth, "October");
        break;
    case 11:
        strcpy(mnth, "November");
        break;
    case 12:
        strcpy(mnth, "December");
        break;

    default:
        printf("\nCheck and correct date in you computer");
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

    printf("\nEnter the amount of electric consumption in %s : ", mnth);
    scanf("%lf", &consp);
    if (consp >= 0)
    {
        if (consp > 200)
        {
            if (consp > 400)
            {
                if (consp > 600)
                {
                    EXTRA = 390;
                    per_u = 1;
                    bill = (EXTRA + (per_u * (consp - 600)));
                }
                else
                {
                    EXTRA = 230;
                    per_u = 0.80;
                    bill = (EXTRA + (per_u * (consp - 400)));
                }
            }
            else
            {
                EXTRA = 100;
                per_u = 0.65;
                bill = (EXTRA + (per_u * (consp - 200)));
            }
        }
        else
        {
            per_u = 0.50;
            bill = (consp * per_u);
        }
    }
    bill_rounded = (bill + 0.0045);
    printf("\nYour electric bill of %s : %.2lf\n", mnth, bill_rounded);
    printf("\nDo you calculate your bill once again ?");
WRN_TYP:
    printf("\n----------------------------------------");
    printf("\n1 --> Yes\n2 --> No\n----------------------------------------");
    printf("\nPlease enter 1 or 2 according to you choice : ");
    scanf("%d", &USR);

    if (USR == 1)
    {
        printf("\nYour choice == Yes\n");
        goto AGAIN;
    }
    else if (USR == 2)
    {
        printf("\nYour choice == No\n");
        goto END;
    }
    else if ((USR != 1) && (USR != 2))
    {
        printf("\nWrong Input!!!");
        goto WRN_TYP;
    }

END:
    printf("\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}
