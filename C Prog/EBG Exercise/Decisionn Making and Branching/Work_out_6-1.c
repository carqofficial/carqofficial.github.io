#include <stdio.h>

int main()
{
    double a, b, c, d, add_ab, sub_cd, ratio, ratio_int;
    printf("\nEnter the value of a, b, c, d : ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    add_ab = (a + b);
    sub_cd = (c - d);
    if (sub_cd != 0)
    {
        ratio = (add_ab / sub_cd);
        ratio_int = (ratio + 0.0005);
        printf("\n\nRatio of (a + b) to (c - d) = %.3lf\n\n", ratio_int);
    }

    else if (sub_cd == 0)
    {
        printf("\n\nError!!\nDivider is zero!!\n\n");
    }
    return 0;
}