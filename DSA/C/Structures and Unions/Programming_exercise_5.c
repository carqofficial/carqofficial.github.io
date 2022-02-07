#include <stdio.h>

struct num
{
    double num[3];
};

int main()
{
    struct num entry_num;
    int i;
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter the number %d : ", i + 1);
        scanf("%lf", entry_num.num[i]);
    }

    double MIN;
    MIN = entry_num.num[0];
    for (i = 1; i < 3; i++)
    {
        if (entry_num.num[i] < MIN)
        {
            MIN = entry_num.num[i];
        }
    }
    return 0;
}