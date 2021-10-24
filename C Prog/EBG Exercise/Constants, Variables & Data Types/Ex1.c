#include<stdio.h>

int main()
{
    /*declearing variables*/
    char FNAME[100], LNAME[100];
    int age;
    float MARK;

    /*declearing values*/
    printf("\nStudent's name : ");
    scanf("%s %s", &FNAME, &LNAME);
    printf("Student's age : ");
    scanf("%d", &age);
    printf("Student's Average Marks : ");
    scanf("%f", &MARK);

    /*printing*/
    printf("\nYour details : ");
    printf("\nName : %s %s", FNAME, LNAME);
    printf("\nAge : %d", age);
    printf("\nAverage Marks : %4.2f", MARK);

    return 0;
}
