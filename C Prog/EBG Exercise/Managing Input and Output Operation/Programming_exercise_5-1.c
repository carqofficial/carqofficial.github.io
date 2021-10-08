#include<stdio.h>

int main()
{
    char w[100], p[100];
    printf("\nEnter 'wordprocessing' in Uppercase : ");
    scanf("\t%4s%10s", w, p);
    printf("\n(a)\t%4s %10s", w, p);
    printf("\n\n(b)\t%4s\n   \t%10s", w, p);
    printf("\n\n(c)\t%-1.1s.%-1.1s.\n\n", w, p);
    return 0;
}