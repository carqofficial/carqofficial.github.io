#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    printf("\nEnter the string : ");
    scanf(" %[^\n]%*c", str);
    int MAX, MIN;
    MAX = 0;
    int count_word = 0;
    int i, STORE_LAST_NUM_max[100], j, STORE_LAST_NUM_min[100], k_max, k_min;
    j = 0;
    k_max = 0;
    k_min = 0;

    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] != ' ') || (str[i] != '.'))
        {
            count_word++;
        }
        if ((str[i] == ' ') || (str[i] == '.'))
        {
            count_word -= 1;
            /*printf("\n%d\n", count_word);*/
            MAX = (MAX > count_word) ? MAX : count_word;
            j++;
            if (j == 1)
            {
                MIN = count_word;
            }
            else if (j > 1)
            {
                MIN = (MIN < count_word) ? MIN : count_word;
            }
            count_word = 0;
        }
    }

    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] != ' ') || (str[i] != '.'))
        {
            count_word++;
        }
        if ((str[i] == ' ') || (str[i] == '.'))
        {
            count_word -= 1;
            /*printf("\n%d\n", count_word);*/

            if (MAX == count_word)
            {
                k_max++;
                STORE_LAST_NUM_max[k_max] = (i - 1);
            }
            if (MIN == count_word)
            {
                k_min++;
                STORE_LAST_NUM_min[k_min] = (i - 1);
            }
            count_word = 0;
        }
    }
    /*printf("\n%d\n", MAX);
    printf("\n%d\n", MIN);
    printf("\n%d\n", STORE_LAST_NUM_min);
    printf("%c", str[STORE_LAST_NUM_min - 1]);*/
    int max_p, min_p, new;

    printf("\nThe word with maximum length : ");
    for (max_p = 1; max_p <= k_max; max_p++)
    {
        for (new = (STORE_LAST_NUM_max[max_p] - MAX); new < STORE_LAST_NUM_max[max_p] + 1; new ++)
        {
            if (str[new] == ' ')
            {
                continue;
            }
            printf("%c", str[new]);
        }
        if (max_p != k_max)
        {
            printf(", ");
        }
    }

    printf("\nThe word with minimum length : ");
    for (min_p = 1; min_p <= k_min; min_p++)
    {
        for (new = (STORE_LAST_NUM_min[min_p] - MIN); new < STORE_LAST_NUM_min[min_p] + 1; new ++)
        {
            if (str[new] == ' ')
            {
                continue;
            }
            printf("%c", str[new]);
        }
        if (min_p != k_min)
        {
            printf(", ");
        }
    }
    return 0;
}
