#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int num;
    printf("\nEnter the number of student : ");
    scanf("%d", &num);
    char NAME[num + 1][1000], ROLL_NO[num + 1][1000];
    double MARKS[num + 1];
    int i;
    system("cls");
    for (i = 0; i < num; i++)
    {
        printf("\nFor student %d. : ", (i + 1));
        printf("\nEnter the student's name : ");
        scanf(" %[^\n]%*c", NAME[i]);
        printf("Enter the student's roll no. : ");
        scanf(" %[^\n]%*c", ROLL_NO[i]);
        printf("Enter the student's marks : ");
        scanf("%lf", &MARKS[i]);
        system("cls");
    }
    int j;
    char lower_NAME[num + 1][1000], TEMP_NAME[1000], TEMP_ROLL[1000];
    double TEMP_MARK;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < strlen(NAME[i]); j++)
        {
            if ((NAME[i][j] >= 'A') && (NAME[i][j] <= 'Z'))
            {
                lower_NAME[i][j] = tolower(NAME[i][j]);
            }
            else
            {
                lower_NAME[i][j] = NAME[i][j];
            }
        }
        lower_NAME[i][strlen(NAME[i])] = '\0';
    }

    for (i = 0; i < (num - 1); i++)
    {
        for (j = (i + 1); j < (num); j++)
        {
            if (strcmp(lower_NAME[j], lower_NAME[j + 1]) > 0)
            {
                strcpy(TEMP_NAME, NAME[i]);
                strcpy(NAME[i], NAME[j]);
                strcpy(NAME[j], TEMP_NAME);
                strcpy(TEMP_ROLL, ROLL_NO[i]);
                strcpy(ROLL_NO[i], ROLL_NO[j]);
                strcpy(ROLL_NO[j], TEMP_ROLL);
                TEMP_MARK = MARKS[i];
                MARKS[i] = MARKS[j];
                MARKS[j] = TEMP_MARK;
            }
        }
    }

    printf("\nRoll No.              Name                  Marks Obtained");
    for (i = 0; i < num; i++)
    {
        printf("\n%-22s%-22s%.2lf", ROLL_NO[i], NAME[i], MARKS[i]);
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}
