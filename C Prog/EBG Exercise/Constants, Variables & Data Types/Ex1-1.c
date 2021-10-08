#include<stdio.h>

int main()
{
    /*declearing variables*/
    char NAME[100];
    int age;
    float MARK;

    /*declearing values*/
    printf("\nStudent's name : ");
    scanf("%[^\n]%*c", NAME);
    printf("Student's age : ");
    scanf("%d", &age);
    printf("Student's Average Marks : ");
    scanf("%f", &MARK);

    /*printing*/
    /*printf("\nYour details : ");*/
    printf("\nName : %s", NAME);
    printf("\nAge : %d", age);
    printf("\nAverage Marks : %f", MARK);

    return 0;
}
