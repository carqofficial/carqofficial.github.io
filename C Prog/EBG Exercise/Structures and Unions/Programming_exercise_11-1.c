#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*help --> https://stackoverflow.com/questions/44768107/c-how-to-obtain-a-time-in-c-using-a-struct*/

struct clock_time
{
    int hour;
    int minute;
    int second;
};

typedef struct clock_time tick;
typedef struct calender_date mark;

struct calender_date
{
    int day;
    int month;
    int year;
    tick clock;
};

int main()
{
    mark calender;
    char buff[100];
    time_t current = time(0);
    struct tm currenttime = *localtime(&current);
    strftime(buff, 100, "%d-%m-%Y %H:%M:%S", &currenttime);
    calender.year = currenttime.tm_year + 1900;
    calender.month = currenttime.tm_mon + 1;
    calender.day = currenttime.tm_mday;
    calender.clock.hour = currenttime.tm_hour;
    calender.clock.minute = currenttime.tm_min;
    calender.clock.second = currenttime.tm_sec;
    printf("\nCurrent time (in 24 hr formate) : %02d:%02d:%02d\n\n", calender.clock.hour, calender.clock.minute, calender.clock.second);
    printf("\nCurrent time (in AM/PM formate) : ");
    if (calender.clock.hour >= 12)
    {
        if (calender.clock.hour == 12)
        {
            printf("12");
        }
        else
        {
            printf("%02d", calender.clock.hour - 12);
        }
        printf(":%02d:%02d PM\n\n", calender.clock.minute, calender.clock.second);
    }
    else
    {
        printf("\nCurrent time (in AM/PM formate) : %02d:%02d:%02d AM\n\n", calender.clock.hour, calender.clock.minute, calender.clock.second);
    }
    return 0;
}