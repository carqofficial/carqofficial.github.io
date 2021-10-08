#include <stdio.h>

int main()
{
    char name[200], address[200], pin[200], dist[200], state[200], coun[200];
    printf("\nEnter you name : ");
    scanf("%[^\n]%*c", name);
    printf("Enter you address : ");
    scanf("%[^\n]%*c", address);
    printf("Enter PIN code : ");
    scanf("%[^\n]%*c", pin);
    printf("Enter district : ");
    scanf("%[^\n]%*c", dist);
    printf("Enter state : ");
    scanf("%[^\n]%*c", state);
    printf("Enter country : ");
    scanf("%[^\n]%*c", coun);

    printf("\nYour full address : %s, %s, %s, %s-%s, %s.\n\n", name, address, dist, state, pin, coun);
}