#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int RomanValue(char x)
{
    /*
    I            1
    IV           4
    V            5
    IX           9
    X            10
    XL           40
    L            50
    XC           90
    C            100
    CD           400
    D            500
    CM           900 
    M            1000
    */
    if (x == 'I')
        return 1;
    if (x == 'V')
        return 5;
    if (x == 'X')
        return 10;
    if (x == 'L')
        return 50;
    if (x == 'C')
        return 100;
    if (x == 'D')
        return 500;
    if (x == 'M')
        return 1000;
}

int DecimalConverter(char roman[])
{
    int DECIMAL_VAL;
    DECIMAL_VAL = 0;
    int len = strlen(roman);
    for (int i = 0; i < len; i++)
    {
        if ((i + 1) < len)
        {
            if (RomanValue(roman[i]) >= RomanValue(roman[i + 1]))
            {
                DECIMAL_VAL += RomanValue(roman[i]);
            }
            else
            {
                DECIMAL_VAL += (RomanValue(roman[i + 1]) - RomanValue(roman[i]));
                i++;
            }
        }

        else
        {
            DECIMAL_VAL += RomanValue(roman[i]);
        }
    }
    return (DECIMAL_VAL);
}
int main()
{
    char enter[1000];
    printf("\nEnter the roman number : ");
    scanf("%s", &enter);
    printf("\nEquivalent decimal value of the roman number : %d", DecimalConverter(enter));
    return 0;
}