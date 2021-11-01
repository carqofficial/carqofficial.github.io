#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int day_num;
    char day_name[500];
START:
    printf("\nEnter the day number : ");
    printf("\n-----------------------");
    printf("\n1 --> Monday\n2 --> Tuesday\n3 --> Wednesday\n4 --> Thursday\n5 --> Friday\n6 --> Saturday\n7 --> Sunday");
    printf("\n-----------------------");
    printf("\nEnter number according to your choice : ");
    scanf("%d", &day_num);

    switch (day_num)
    {
    case 1:
        strcpy(day_name, "Monday");
        break;
    case 2:
        strcpy(day_name, "Tuesday");
        break;
    case 3:
        strcpy(day_name, "Wednesday");
        break;
    case 4:
        strcpy(day_name, "Thursday");
        break;
    case 5:
        strcpy(day_name, "Friday");
        break;
    case 6:
        strcpy(day_name, "Saturday");
        break;
    case 7:
        strcpy(day_name, "Sunday");
        break;
    default:
        printf("\nEnter the input carefully!\n");
        goto START;
        break;
    }

    printf("\nAccording to your choice : ");
    printf("\n%d --> %s", day_num, day_name);
    printf("\n\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}