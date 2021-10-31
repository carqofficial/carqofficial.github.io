#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int CHOICE, SAMPLE;
    double PUR_AMOUNT, DISCOUNT_RATE, DISCOUNT, NET;
START:
    printf("\nEnter the total purchase amount : ");
    scanf("%lf", &PUR_AMOUNT);
    printf("\nItems type : ");
    printf("\n-----------------------");
    printf("\n1. Mill cloth");
    printf("\n2. Handloom items");
    printf("\n-----------------------");
    printf("\nEnter 1 or 2 according to your items type : ");
    scanf("%d", &CHOICE);
    if (PUR_AMOUNT <= 300)
    {
        if (PUR_AMOUNT <= 200)
        {
            if ((PUR_AMOUNT <= 100) && (PUR_AMOUNT >= 0))
            {
                switch (CHOICE)
                {
                case 1:
                    DISCOUNT_RATE = 0;
                    break;

                default:
                    DISCOUNT_RATE = 5;
                    break;
                }
            }
            else if (PUR_AMOUNT < 0)
            {
                printf("\nYou have entered wrong amount.");
                goto START;
            }
            else
            {
                switch (CHOICE)
                {
                case 1:
                    DISCOUNT_RATE = 5;
                    break;

                default:
                    DISCOUNT_RATE = 7.5;
                    break;
                }
            }
        }
        else
        {
            switch (CHOICE)
            {
            case 1:
                DISCOUNT_RATE = 7.5;
                break;

            default:
                DISCOUNT_RATE = 10;
                break;
            }
        }
    }
    else if (PUR_AMOUNT > 300)
    {

        switch (CHOICE)
        {
        case 1:
            DISCOUNT_RATE = 10;
            break;

        default:
            DISCOUNT_RATE = 15;
            break;
        }
    }
    int count;
    count = 0;
    SAMPLE = (int)PUR_AMOUNT;
    /*printf("\nPurchase amount in int : %d", SAMPLE);*/
    while (SAMPLE != 0)
    {
        count++;
        SAMPLE /= 10;
    }
    DISCOUNT = (DISCOUNT_RATE * PUR_AMOUNT) / 100;
    NET = PUR_AMOUNT - DISCOUNT;
    printf("\nYour purchase amount      : %*.2lf", (count + 3), (PUR_AMOUNT + 0.0045));
    printf("\nYour discount amount      : %*.2lf", (count + 3), (DISCOUNT + 0.0045));
    printf("\n----------------------------");
    int DASH;
    for (DASH = 1; DASH <= (count + 3); DASH++)
    {
        printf("-");
    }
    printf("\nYour total payable amount : %*.2lf\n", (count + 3), (NET + 0.0045));
    printf("\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}