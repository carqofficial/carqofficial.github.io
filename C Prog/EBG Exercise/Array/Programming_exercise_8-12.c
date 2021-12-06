#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char TEXT[5000];
    printf("\nEnter the text : ");
    scanf(" %[^\n]*%c", &TEXT);
    /*printf("TEXT[1] : %c", TEXT[1]);*/
    char small_ch, large_ch;
    int small_count[200], large_count[100];
    /*small_a = 97;
    small_z = 122;
    large_A = 65;
    large_Z = 90;*/
    int i, len, alph_to_small_num, alph_to_large_num;
    len = strlen(TEXT);
    for (i = 'a'; i <= 'z'; i++)
    {
        small_count[i] = 0;
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        large_count[i] = 0;
    }
    for (i = 0; i <= (len - 1); i++)
    {
        for (small_ch = 'a'; small_ch <= 'z'; small_ch++)
        {
            alph_to_small_num = small_ch;
            /*printf("\n%d", alph_to_small_num);*/
            if (TEXT[i] == small_ch)
            {
                small_count[alph_to_small_num]++;
            }
        }
        for (large_ch = 'A'; large_ch <= 'Z'; large_ch++)
        {
            alph_to_large_num = large_ch;
            /*printf("\n%d", alph_to_small_num);*/
            if (TEXT[i] == large_ch)
            {
                large_count[alph_to_large_num]++;
            }
        }
    }
    system("cls");
    printf("\n-------------------");
    printf("\nYour entered text : \"%s\"", TEXT);
    printf("\n-------------------");
    printf("\n\n------------------------------");
    for (i = 'a'; i <= 'z'; i++)
    {
        if (small_count[i] > 0)
        {
            printf("\n%c in you text : %d times", i, small_count[i]);
        }
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        if (large_count[i] > 0)
        {
            printf("\n%c in you text : %d times", i, large_count[i]);
        }
    }
    printf("\n------------------------------");
    printf("\n\npress any key to exit.....");
    getch();
    printf("\n\n");

    return 0;
}