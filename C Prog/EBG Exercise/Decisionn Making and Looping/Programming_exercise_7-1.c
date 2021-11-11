#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    double num;
    char rev_num[5000];
    printf("\nEnter a number (maximum 6 digits permissable after decimal) : ");
    scanf("%lf", &num);
    int j = snprintf(rev_num, 5000, "%lf", num);
    int len;
    len = strlen(rev_num);
    /*printf("%d", len);*/
    int i;
    /*printf("\n%s", rev_num);*/
    int N0_adl_pos, count;
    /*count = 0;
    for (i = 0; i <= (len - 1); i++)
    {
        while (rev_num[i] == '.')
        {
            goto mid;
        }
        count++;
    }
mid:
    printf("%d\n", count);*/
    /*printf("\n");*/
    for (i = (len - 1); i >= 0; i--)
    {
        /*printf("%c", rev_num[i]);*/
        if (rev_num[i] != '0')
        {
            /*printf("\nl\n");*/
            N0_adl_pos = i;
            goto loop_end;
        }
    }
loop_end:
    /*printf("\n%d\n", N0_adl_pos);*/
    printf("\n");
    printf("\nPrinting the entered number in reverse order : \n");
    if (rev_num[N0_adl_pos] != '.')
    {
        for (i = (N0_adl_pos); i >= 0; i--)
        {

            printf("%c", rev_num[i]);
        }
    }
    else if (rev_num[N0_adl_pos] == '.')
    {
        for (i = (N0_adl_pos - 1); i >= 0; i--)
        {

            printf("%c", rev_num[i]);
        }
    }
    printf("\n");
    printf("\nEnter any to exit : ");
    getch();
    printf("\n\n");
    return 0;
}