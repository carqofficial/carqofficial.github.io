#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int m_day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *day_name_ch[] = {"Sunday", "Monday", " Tuesday", "Wednesday", "Thursday", "Firday", "Saturday"};
struct DATE_ENTRY
{
    int day_num;
    int month_num;
    int year_num;
};
typedef struct DATE_ENTRY date_entry;
int calt(date_entry *NEW)
{
    int i, j, k, d_name_index;
    for (i = 1900; i < NEW->year_num; i++)
    {
        if ((NEW->year_num % 4 == 0) && (((NEW->year_num % 100) != 0) || (NEW->year_num % 400) == 0))
        {
            NEW->day_num += 366;
        }
        else
        {
            NEW->day_num += 365;
        }
    }
    for (i = 0; i < NEW->month_num - 1; i++)
    {
        NEW->day_num += m_day[i];
    }
    d_name_index = (NEW->day_num) % 7;
    return (d_name_index);
}

/*help --> https://stackoverflow.com/questions/6054016/c-program-to-find-day-of-week-given-date*/

int main()
{
    date_entry DATE;
Start:
    printf("\nEnter the date (in DD-MM-YYYY formate) : ");
    scanf("%d-%d-%d", &DATE.day_num, &DATE.month_num, &DATE.year_num);
    int dayname_index;
    if ((DATE.year_num < 1900) || (DATE.day_num > m_day[DATE.month_num]) || (DATE.day_num < 1) || (DATE.month_num > 12) || (DATE.month_num < 1) || (DATE.year_num > 9999))
    {
        printf("\nEntered date in invalid\n\n");
        goto Start;
    }
    else
    {
        dayname_index = calt(&DATE);
    }
    printf("\nName of the corrosponding date : %s", day_name_ch[dayname_index]);
    printf("\n\n");
    return 0;
}