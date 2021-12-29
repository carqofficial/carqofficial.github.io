#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student
{
    char name[1000];
    char roll[1000];
    int phone_no;
    double marks;
};

void Display(struct student stud)
{
    printf("\nName : %s", stud.name);
    printf("\nRoll : %s", stud.roll);
    printf("\nPrevious exam marks : %lf", stud.marks);
    printf("\nContact no. : %d\n\n", stud.phone_no);
}

int main()
{
    int num;
    printf("\nEnter the number of the students : ");
    scanf("%d", &num);
    struct student students[num];
    int i;
    for (i = 0; i < num; i++)
    {
        printf("\nFor student %d : ", (i + 1));
        printf("\nEnter the name : ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Enter the roll : ");
        scanf(" %[^\n]%*c", students[i].roll);
        printf("Enter the contact no. : ");
        scanf("%d", &students[i].phone_no);
        printf("Enter the previous exam marks : ");
        scanf("%lf", &students[i].marks);
        printf("\n");
    }
    system("cls");
    int num_stud;
    printf("\nEnter the student number : ");
    scanf("%d", &num_stud);
    Display(students[num_stud - 1]);
    /*printf("Name : %s", students[num_stud - 1].name);
    printf("\nRoll : %s", students[num_stud - 1].roll);
    printf("\nPrevious exam marks : %lf", students[num_stud - 1].marks);
    printf("\nContact no. : %d\n\n", students[num_stud - 1].phone_no);*/

    return 0;
}