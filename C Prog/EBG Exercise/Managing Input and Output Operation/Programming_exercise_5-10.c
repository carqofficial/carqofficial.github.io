#include <stdio.h>

int main()
{
    char name[100][100];
    long long int code[1000];
    double price[1000];
    int num, i, i1;
    printf("\nHow many product details you want to input : ");
    scanf("%d", &num);
    i = 1;
    printf("\n");
    
    while(i<=num)
    {
        printf("Enter product name, code, price : ");
        scanf("%s %lld %lf", name[i], &code[i], &price[i]);
        i++;
    }

    
    printf("\nName                Code                Price");
    i=1;
    while(i<=num)
    {
        printf("\n%-10s          %-10lld          %10lf", name[i], code[i], price[i]);
        i++;
    }
    printf("\n\n");
    return 0;
}