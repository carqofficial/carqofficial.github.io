#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    double num;
    char sum_num[5000];
    printf("\nEnter a number (maximum 6 digits permissable after decimal) : ");
    scanf("%lf", &num);
    int j = snprintf(sum_num, 5000, "%lf", num);
    /*printf("\n%s\n", sum_num);*/
    int len = strlen(sum_num);
    int i, N0_afl_pos;
    for (i = (len - 1); i >= 0; i--)
    {
        if (sum_num[i] != '0')
        {
            N0_afl_pos = i;
            goto CHECKER;
        }
    }
CHECKER:
    /*printf("\n%d\n", N0_afl_pos);*/
    if (N0_afl_pos != '.')
    {
        double num_ult;
        int mul, digit, sum;
        sum = 0;
        mul = (6 - (len - N0_afl_pos - 1));
        num_ult = (num * (pow(10, mul)));
        /*printf("\n%d %lf\n", num_ult, num_ult);*/
        while (num_ult != 0)
        {
            digit = (int)num_ult % 10;
            sum += digit;
            num_ult /= 10;
        }
        printf("\nSum of the digits you have entered : %d\n", sum);
    }
    else if (N0_afl_pos == '.')
    {
        int num_ult, digit, sum;
        sum = 0;
        num_ult = (int)num;
        printf("\n%d\n", num_ult);
        while (num_ult != 0)
        {
            digit = num_ult % 10;
            sum += digit;
            num_ult /= 10;
        }
        printf("\nSum of the digits you have entered : %d\n", sum);
    }
    printf("\nEnter any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}