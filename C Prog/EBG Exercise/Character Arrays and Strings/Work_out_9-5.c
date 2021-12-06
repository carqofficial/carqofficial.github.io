#include <stdio.h>

int main()
{
    char country[15] = "United States";
    printf("\n\n%15s", country);
    printf("\n%15.6s", country);
    printf("\n%-15.6s", country);
    printf("\n%.3s", country);
    printf("\n%15.0s", country);
    
    return 0;
}