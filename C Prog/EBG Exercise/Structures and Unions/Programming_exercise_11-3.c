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
void update(double t_temp, double start_temp, mark calender_temp)
{
    double time_taken_temp;
    time_taken_temp = t_temp - start_temp;
    calender_temp.clock.second += time_taken_temp;
    if (calender_temp.clock.second >= 60)
    {
        if ((time_taken_temp / 60) >= (int)(time_taken_temp / 60))
        {
            calender_temp.clock.second = ((time_taken_temp / 60) - (int)(time_taken_temp / 60)) * 60;
        }
        else if ((time_taken_temp / 60) < (int)(time_taken_temp / 60))
        {
            calender_temp.clock.second = ((time_taken_temp / 60) - ((int)(time_taken_temp / 60) - 1)) * 60;
        }
        calender_temp.clock.minute += ((int)((time_taken_temp / 60) - 0.045));
        if (calender_temp.clock.minute >= 60)
        {
            if ((calender_temp.clock.minute / 60) >= (int)(calender_temp.clock.minute / 60))
            {
                calender_temp.clock.minute = ((calender_temp.clock.minute / 60) - (int)(calender_temp.clock.minute / 60)) * 60;
            }
            else if ((calender_temp.clock.minute / 60) < (int)(calender_temp.clock.minute / 60))
            {
                calender_temp.clock.minute = ((calender_temp.clock.minute / 60) - ((int)(calender_temp.clock.minute / 60) - 1)) * 60;
            }
            calender_temp.clock.hour += ((int)((calender_temp.clock.minute / 60) - 0.045));
        }
    }
}

int main()
{
    clock_t start, end, t;
    double time_taken, t_int, start_int;
    start = clock();
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
    t = clock();
    t_int = (double)t;
    start_int = (double)start;
    update(t_int, start_int, calender);
    printf("\nCurrent time (in 24 hr formate) : %02d:%02d:%02d\n\n", calender.clock.hour, calender.clock.minute, calender.clock.second);
    end = clock();
    time_taken = (double)(end - start);
    printf("~%.2lf\n\n", time_taken);
    return 0;
}