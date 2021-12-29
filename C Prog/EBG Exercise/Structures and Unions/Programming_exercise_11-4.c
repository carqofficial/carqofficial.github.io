#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct truct_DATA
{
    int day;
    int month;
    int year;
};

struct DAY_MAX
{
    int month_max[13];
};

struct DAY_MIN
{
    int month_min[13];
};

typedef struct truct_DATA data;

void MAX_MIN(struct DAY_MAX *MAX_temp, struct DAY_MIN *MIN_temp)
{
    MAX_temp->month_max[1] = 31;
    MAX_temp->month_max[2] = 28;
    MAX_temp->month_max[3] = 31;
    MAX_temp->month_max[4] = 30;
    MAX_temp->month_max[5] = 31;
    MAX_temp->month_max[6] = 30;
    MAX_temp->month_max[7] = 31;
    MAX_temp->month_max[8] = 31;
    MAX_temp->month_max[9] = 30;
    MAX_temp->month_max[10] = 31;
    MAX_temp->month_max[11] = 30;
    MAX_temp->month_max[12] = 31;
    MAX_temp->month_max[13] = 29;

    MIN_temp->month_min[1] = 1;
    MIN_temp->month_min[2] = 1;
    MIN_temp->month_min[3] = 1;
    MIN_temp->month_min[4] = 1;
    MIN_temp->month_min[5] = 1;
    MIN_temp->month_min[6] = 1;
    MIN_temp->month_min[7] = 1;
    MIN_temp->month_min[8] = 1;
    MIN_temp->month_min[9] = 1;
    MIN_temp->month_min[10] = 1;
    MIN_temp->month_min[11] = 1;
    MIN_temp->month_min[12] = 1;
    MIN_temp->month_min[13] = 1;
}

int YEAR_CHECKER(data new_temp)
{
    int leapyear_checker, year_zero_counter;
    year_zero_counter = 0;
    char year_buff[1000];
    int k = snprintf(year_buff, 1000, "%d", new_temp.year);
    int i;
    for (i = strlen(year_buff) - 2; i < strlen(year_buff); i++)
    {
        if (year_buff[i] == '0')
        {
            year_zero_counter++;
        }
    }
    leapyear_checker = (year_zero_counter >= 2) ? (((new_temp.year % 400) == 0) ? 1 : 0) : (((new_temp.year % 4) == 0) ? 1 : 0);
    return (leapyear_checker);
}

int MONTH_CHECKER(data *new_temp)
{
    int month_checker;
    month_checker = ((new_temp->month <= 12) && (new_temp->month >= 1)) ? 1 : 0;
    int leap_yr_check;
    leap_yr_check = YEAR_CHECKER(*new_temp);
    /*printf("lp_chk --> %d ", leap_yr_check);*/
    if ((leap_yr_check == 1) && (new_temp->month == 2))
    {
        new_temp->month = 13;
    }
    /*printf("month --> %d ", new_temp->month);*/
    return (month_checker);
}

int DAY_CHECKER(data new_temp)
{
    MONTH_CHECKER(&new_temp);
    struct DAY_MAX MAX_TEMP;
    struct DAY_MIN MIN_TEMP;
    MAX_MIN(&MAX_TEMP, &MIN_TEMP);
    int i;
    /*printf("month --> %d ", new_temp.month);
    printf("day --> %d ", new_temp.day);
    printf("max day --> %d ", MAX_TEMP.month_max[new_temp.month]);*/
    printf("\n");
    if (new_temp.day > MAX_TEMP.month_max[new_temp.month])
    {
        switch (new_temp.month)
        {
        case 1:
            printf("January has only 31 days.");
            break;
        case 2:
            printf("February(for non leap year) has only 28 days.");
            break;
        case 3:
            printf("March has only 31 days.");
            break;
        case 4:
            printf("April has only 30 days.");
            break;
        case 5:
            printf("May has only 31 days.");
            break;
        case 6:
            printf("June has only 30 days.");
            break;
        case 7:
            printf("July has only 31 days.");
            break;
        case 8:
            printf("August has only 31 days.");
            break;
        case 9:
            printf("September has only 30 days.");
            break;
        case 10:
            printf("October has only 31 days.");
            break;
        case 11:
            printf("November has only 30 days.");
            break;
        case 12:
            printf("December has only 31 days.");
            break;
        case 13:
            printf("February(for a leap year) has only 29 days.");
            break;
        }
        return 0;
    }
    else if (new_temp.day < MIN_TEMP.month_min[new_temp.month])
    {
        printf("\nDay number can not be zero or negetive.\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    data new;
    printf("\nEnter the year : ");
    scanf("%d", &new.year);
    printf("Enter the month (number) : ");
    scanf("%d", &new.month);
    printf("Enter the day : ");
    scanf("%d", &new.day);
    int mnth_chkr;
    mnth_chkr = MONTH_CHECKER(&new);
    if (mnth_chkr == 0)
    {
        printf("\nEntered wrong month number!");
        goto end;
    }
    else if (mnth_chkr == 1)
    {
        int day_chkr;
        day_chkr = DAY_CHECKER(new);
        if (day_chkr == 0)
        {
            goto end;
        }
        else if (day_chkr == 1)
        {
            switch (new.month)
            {
            case 1:
                printf("\nJanuary %d, %d", new.day, new.year);
                break;
            case 2:
                printf("\nFebruary %d, %d", new.day, new.year);
                break;
            case 3:
                printf("\nMarch %d, %d", new.day, new.year);
                break;
            case 4:
                printf("\nApril %d, %d", new.day, new.year);
                break;
            case 5:
                printf("\nMay %d, %d", new.day, new.year);
                break;
            case 6:
                printf("\nJune %d, %d", new.day, new.year);
                break;
            case 7:
                printf("\nJuly %d, %d", new.day, new.year);
                break;
            case 8:
                printf("\nAugust %d, %d", new.day, new.year);
                break;
            case 9:
                printf("\nSeptember %d, %d", new.day, new.year);
                break;
            case 10:
                printf("\nOctober %d, %d", new.day, new.year);
                break;
            case 11:
                printf("\nNovember %d, %d", new.day, new.year);
                break;
            case 12:
                printf("\nDecember %d, %d", new.day, new.year);
                break;
            case 13:
                printf("\nThe entered year is a leap year.");
                printf("\nFebruary %d, %d", new.day, new.year);
                break;
            }
        }
    }
end:
    printf("\n\n");
    return 0;
}