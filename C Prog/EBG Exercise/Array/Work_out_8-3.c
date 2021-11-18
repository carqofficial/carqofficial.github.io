#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char number[5000], number_1s[5000], number_2s[5000];
start:
    printf("\nEnter a binary number : ");
    scanf(" %s", &number);
    int i;
    int len = strlen(number);
    for (i = 0; i <= (len - 1); i++)
    {
        if (number[i] == '0')
        {
            number_1s[i] = '1';
        }
        else if (number[i] == '1')
        {
            number_1s[i] = '0';
        }
        else if (number[i] == '.')
        {
            number_1s[i] = '.';
        }
        else
        {
            printf("\nEnter correct input!!");
            goto start;
        }
    }

    printf("\n1's compliment : %s", number_1s);

    /*if (number_1s[(len - 1)] == '0')
    {
        number_2s[(len - 1)] = '1';
        for (i = (len - 2); i >= 0; i--)
        {
            if (number_1s[i] == '0')
            {
                number_2s[i] = '1';
            }
            else if (number_1s[i] == '1')
            {
                number_2s[i] = '0';
            }
            else if (number_1s[i] == '.')
            {
                number_2s[i] = '.';
            }
        }
    }*/
    for (i = (len - 1); i >= 0; i--)
    {
        if (number_1s[i] == '1')
        {
            number_1s[i] = '0';
        }
        else if (number_1s[i] == '0')
        {
            number_1s[i] = '1';
            goto end;
        }
    }
end:
    printf("\n2's compliment : %s", number_1s);
    char choice[500];
WRN:
    printf("\n\nDo you want to start the program once again(y/n) : ");
    scanf(" %s", choice);
    if (((strcmp(choice, "yes")) == 0) || ((strcmp(choice, "Yes")) == 0) || ((strcmp(choice, "YES")) == 0) || ((strcmp(choice, "y")) == 0) || ((strcmp(choice, "Y")) == 0))
    {
        goto start;
    }
    else if (((strcmp(choice, "No")) == 0) || ((strcmp(choice, "NO")) == 0) || ((strcmp(choice, "N")) == 0) || ((strcmp(choice, "n")) == 0) || ((strcmp(choice, "no")) == 0))
    {
        goto end_last;
    }
    else
    {
        printf("\nWrong Input!!");
        goto WRN;
    }
end_last:
    printf("\n\nPress 'Enter' key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}