#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
WRN:
    printf("\nEnter the string : ");
    scanf("%s", &str);
    int i, j;
    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    /*for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] < 48) || (str[i] > 57))
        {
            printf("\nWrong Input!!");
            goto WRN;
        }
    }*/

    /*int digit[strlen(str) + 1];
    for (i = 0; i < strlen(str); i++)
    {
        digit[i] = str[i] - '0';
    }

    int space;
    if ((strlen(str) % 2) != 0)
    {
        for (i = 0; i < (strlen(str) + 1) / 2; i++)
        {
            printf("\n");
            for (space = 0; space <= (strlen(str) - i + 1); space++)
            {
                printf("  ");
            }
            for (j = i; j <= (2 * i); j++)
            {
                printf("%d ", digit[j]);
            }
            if (i > 0)
            {
                for (j = ((2 * i) - 1); j >= i; j--)
                {
                    printf("%d ", digit[j]);
                }
            }
        }
    }
    if ((strlen(str) % 2) == 0)
    {
        for (i = 0; i < ((strlen(str)) / 2); i++)
        {
            printf("\n");
            for (space = 0; space <= (strlen(str) - i + 1); space++)
            {
                printf("  ");
            }
            for (j = i; j <= (2 * i); j++)
            {
                printf("%d ", digit[j]);
            }
            if (i > 0)
            {
                for (j = ((2 * i) - 1); j >= i; j--)
                {
                    printf("%d ", digit[j]);
                }
            }
        }
    }*/
    int space;
    if ((strlen(str) % 2) != 0)
    {
        for (i = 0; i < (strlen(str) + 1) / 2; i++)
        {
            printf("\n");
            for (space = 0; space <= (strlen(str) - i + 1); space++)
            {
                printf("  ");
            }
            for (j = i; j <= (2 * i); j++)
            {
                printf("%c ", str[j]);
            }
            if (i > 0)
            {
                for (j = ((2 * i) - 1); j >= i; j--)
                {
                    printf("%c ", str[j]);
                }
            }
        }
    }
    if ((strlen(str) % 2) == 0)
    {
        for (i = 0; i < ((strlen(str)) / 2); i++)
        {
            printf("\n");
            for (space = 0; space <= (strlen(str) - i + 1); space++)
            {
                printf("  ");
            }
            for (j = i; j <= (2 * i); j++)
            {
                printf("%c ", str[j]);
            }
            if (i > 0)
            {
                for (j = ((2 * i) - 1); j >= i; j--)
                {
                    printf("%c ", str[j]);
                }
            }
        }
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}