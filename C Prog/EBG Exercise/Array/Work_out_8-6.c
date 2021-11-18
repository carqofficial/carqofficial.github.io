#include <stdio.h>
#include <conio.h>

int main()
{
    printf("\n.---------------------+-------------------------.");
    printf("\n| City Code           |      Car Code           |");
    printf("\n+---------------------+-------------------------+");
    printf("\n|  M --> Madras       |     1 --> Ambassador    |");
    printf("\n|  D --> Delhi        |     2 --> Fiat          |");
    printf("\n|  C --> Calcutta     |     3 --> Dolphin       |");
    printf("\n|  B --> Bombay       |     4 --> Maruti        |");
    printf("\n'---------------------+-------------------------'");
    char city_code;
    int car_code;
    int car[5][5];
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            car[i][j] = 0;
        }
    }
    printf("\n\nEnter X to Exit");
    for (i = 1; i <= 10000; i++)
    {
        printf("\nEnter city code : ");
        scanf("%s", &city_code);
        if (city_code == 'X')
        {
            break;
        }

        printf("Enter the car code : ");
        scanf("%d", &car_code);

        switch (city_code)
        {
        case 'M':
            switch (car_code)
            {
            case 1:
                car[1][1]++;
                break;
            case 2:
                car[1][2]++;
                break;
            case 3:
                car[1][3]++;
                break;
            case 4:
                car[1][4]++;
                break;
            }
            break;
        case 'D':
            switch (car_code)
            {
            case 1:
                car[2][1]++;
                break;
            case 2:
                car[2][2]++;
                break;
            case 3:
                car[2][3]++;
                break;
            case 4:
                car[2][4]++;
                break;
            }
            break;
        case 'C':
            switch (car_code)
            {
            case 1:
                car[3][1]++;
                break;
            case 2:
                car[3][2]++;
                break;
            case 3:
                car[3][3]++;
                break;
            case 4:
                car[3][4]++;
                break;
            }
            break;
        case 'B':
            switch (car_code)
            {
            case 1:
                car[4][1]++;
                break;
            case 2:
                car[4][2]++;
                break;
            case 3:
                car[4][3]++;
                break;
            case 4:
                car[4][4]++;
                break;
            }
            break;
        }
    }
END:
    printf("\n\n.--------------------------------------------------------------------------.");
    printf("\n|                             POPULARITY TABLE                             |");
    printf("\n'--------------------------------------------------------------------------'\n");
    printf("\n.--------------+--------------+--------------+--------------+--------------.");
    printf("\n|     City     |  Ambassador  |     Fiat     |   Dolphin    |    Maruti    |");
    printf("\n|--------------+--------------+--------------+--------------+--------------|");
    printf("\n|    Madras    |%7d       |%7d       |%7d       |%7d       |", car[1][1], car[1][2], car[1][3], car[1][4]);
    printf("\n|--------------+--------------+--------------+--------------+--------------|");
    printf("\n|    Delhi     |%7d       |%7d       |%7d       |%7d       |", car[2][1], car[2][2], car[2][3], car[2][4]);
    printf("\n|--------------+--------------+--------------+--------------+--------------|");
    printf("\n|   Calcutta   |%7d       |%7d       |%7d       |%7d       |", car[3][1], car[3][2], car[3][3], car[3][4]);
    printf("\n|--------------+--------------+--------------+--------------+--------------|");
    printf("\n|    Mumbai    |%7d       |%7d       |%7d       |%7d       |", car[4][1], car[4][2], car[4][3], car[4][4]);
    printf("\n'--------------+--------------+--------------+--------------+--------------'");
    printf("\n\n");
    return 0;
}