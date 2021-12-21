#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int num;
    printf("\nEnter the number of strings to be entered : ");
    scanf("%d", &num);
    char str[num + 1][1000];
    int i, j;
    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("Enter string %d. : ", (i + 1));
        scanf(" %[^\n]%*c", str[i]);
    }
    char lower[num + 1][1000];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < strlen(str[i]); i++)
        {
            if ((str[i][j] >= 'A') && (str[i][j] <= 'Z'))
            {
                lower[i][j] = tolower(str[i][j]);
            }
            else
            {
                lower[i][j] = str[i][j];
            }
        }
        lower[i][strlen(str[i])] = '\0';
    }
    char temp[1000], lower_temp[1000];
    int k;
    for (i = 0; i < (num - 1); i++)
    {
        k = 0;
        for (j = i + 1; j < num; j++)
        {
            k = 0;
        LOOP_EQUAL:
            if (lower[i][k] == lower[j][k])
            {
                k++;
                goto LOOP_EQUAL;
            }
            else if (lower[i][k] > lower[j][k])
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
                strcpy(lower_temp, lower[i]);
                strcpy(lower[i], lower[j]);
                strcpy(lower[j], lower_temp);
            }
        }
    }
    printf("\nPrinting the strings in lexicographical order : ");
    for (i = 0; i < num; i++)
    {
        printf("\n%s", str[i]);
    }
    printf("\n\n");
    return 0;
}