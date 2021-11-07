#include <stdio.h>
#include <conio.h>

int main()
{
    int m, x;
    long long int BI_COFFE, m_FAC, x_FAC, mx_FAC;
START:
    printf("\nFor B(m, x) : ");
    printf("\nEnter the value of m : ");
    scanf("%d", &m);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    m_FAC = 1;
    x_FAC = 1;
    mx_FAC = 1;
    if ((m < x) || (m < 0) || (x < 0))
    {
        printf("\nEntered inputs are incompatible!!");
        goto START;
    }
    else if (x == 0 || m == 0)
    {
        BI_COFFE = 1;
        printf("\nB(%d, %d) = %lld\n\n", m, x, BI_COFFE);
    }
    else
    {
        long long int i;
        for (i = 1; i <= x; i++)
        {
            x_FAC *= i;
        }
        for (i = 1; i <= m; i++)
        {
            m_FAC *= i;
        }
        for (i = 1; i <= (m - x); i++)
        {
            mx_FAC *= i;
        }
        BI_COFFE = (m_FAC) / ((x_FAC) * (mx_FAC));
        printf("\nB(%d, %d) = %lld\n\n", m, x, BI_COFFE);
    }
    printf("\n\nPress any key to exit...");
    getch();

    return 0;
}