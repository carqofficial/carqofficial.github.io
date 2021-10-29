#include <stdio.h>
#include <conio.h>

int main()
{
    int LEVEL, CA, EA, LEVEL_1;
    double BASIC, TAX, HRA, PERKS, GROSS, NET, TAX_RATE;
START:
    printf("\nEnter your job level : ");
    scanf("%d", &LEVEL);
    printf("Enter your basic pay : ");
    scanf("%lf", &BASIC);

    HRA = (BASIC * 25) / 100;
    LEVEL_1 = LEVEL;
    switch (LEVEL_1)
    {
    case 1:
        CA = 1000;
        EA = 500;
        GROSS = BASIC + HRA + CA + EA;
        break;
    case 2:
        CA = 750;
        EA = 200;
        GROSS = BASIC + HRA + CA + EA;
        break;
    case 3:
        CA = 500;
        EA = 100;
        GROSS = BASIC + HRA + CA + EA;
        break;
    case 4:
        CA = 250;
        EA = 0;
        GROSS = BASIC + HRA + CA + EA;
        break;
    default:
        printf("\nEnter invalid job level number.\n");
        goto START;
        break;
    }

    if (GROSS <= 2000)
    {
        TAX_RATE = 0;
    }

    if ((GROSS > 2000) && (GROSS <= 4000))
    {
        TAX_RATE = 2;
    }
    if ((GROSS > 4000) && (GROSS <= 5000))
    {
        TAX_RATE = 5;
    }
    if (GROSS > 5000)
    {
        TAX_RATE = 8;
    }
    TAX = ((GROSS * TAX_RATE) / 100);
    NET = GROSS - TAX;
    printf("\nLevel Number : %d", LEVEL);
    printf("\nBasic amount : %.3lf", (BASIC + 0.00045));
    printf("\nGross Salary : %.3lf", (GROSS + 0.00045));
    printf("\nNet Salary   : %.3lf", (NET + 0.00045));

    printf("\n\nPress any key to exit..");
    getch();
    printf("\n\n");
    return 0;
}