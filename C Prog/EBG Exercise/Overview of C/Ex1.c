#include<stdio.h>

int main()
{
    char FNAME[15];
    char LNAME[15];
    char STREET[30];
    char CITY[15];
    int PINCODE, DOORNO;
    printf("\nFirst Name : ");
    scanf("%s", &FNAME);
    printf("\nLast Name :");
    scanf("%s", &LNAME);
    printf("\nDoor No. : ");
    scanf("%d", &DOORNO);
    printf("\nStreet : ");
    scanf("%s", &STREET);
    printf("\nCity : ");
    scanf("%s", &CITY);
    printf("\nPin code : ");
    scanf("%d", &PINCODE);
    printf("\n\nYour Name : %s %s\n", FNAME, LNAME);
    printf("Your Address : %d, %s, %s, PIN - %d", DOORNO, STREET, CITY, PINCODE);
}
