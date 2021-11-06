#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start = clock();
    time_t my, val = 1;
    struct tm *current_time;
    my = time(NULL);
    current_time = localtime(&my);
    printf("\nYear : %d", current_time->tm_year+1900);
    clock_t end = clock();
    double cpu_time = (double)(end - start);
    printf("\nTime : %lf", cpu_time);
    return 0;
}