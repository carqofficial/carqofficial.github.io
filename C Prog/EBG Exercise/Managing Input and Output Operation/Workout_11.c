#include<stdio.h>

int main()
{
    char a = 'A';
    char name[100] = "Sayan Das Midnapore";
    printf("\nOUTPUT OF CHARECTERS\n\n");
    printf("\n%c\n%3c\n%5c", a, a, a);
    printf("\n%3c\n%c\n", a, a);
    printf("\n");
    printf("OUTPUT OF STRINGS\n\n");
    printf("%s\n", name);
    printf("%20s\n", name);
    printf("%20.10s\n", name);
    printf("%.5s\n", name);
    printf("%5s\n", name);
    
    return 0;
}