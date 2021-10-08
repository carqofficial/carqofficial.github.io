#include<stdio.h>

int main()
{
    char fname[100] = "ANIL", mname[100] = "KUMAR", lname[100] = "GUPTA";
    printf("\nThe name is : %s %s %s\n", fname, mname, lname);
    printf("\nExpressing the name in specified format : ");
    printf("\n(a) %s %.1s. %s", fname, mname, lname);
    printf("\n(b) %.1s.%.1s. %s", fname, mname, lname);
    printf("\n(c) %s %.1s.%.1s.\n\n", lname, fname, mname);

    return 0;
}