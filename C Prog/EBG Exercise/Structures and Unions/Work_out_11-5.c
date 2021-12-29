#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct marks
{
    double sub[3];
    double total;
};

int main()
{
    int num;
    printf("\nEnter number of the students : ");
    scanf("%d", &num);
    struct marks student[num];
    int i, j;
    for (i = 0; i < num; i++)
    {
        student[i].total = 0;
        printf("\nFor student %d : \n", (i + 1));
        for (j = 0; j < 3; j++)
        {
            printf("Enter the subject[%d] marks : ", (j + 1));
            scanf("%lf", &student[i].sub[j]);
            student[i].total += student[i].sub[j];
        }
    }
    int stud_num;
    printf("\nEnter the student no. : ");
    scanf("%d", &stud_num);
    printf("\nStudent[%d] marks : ", (stud_num - 1));
    for (j = 0; j < 3; j++)
    {
        printf("\nMarks of the subject[%d] : %.2lf", (j + 1), student[stud_num - 1].sub[j]);
    }
    printf("\nTotal marks obtained    : %.2lf\n\n", student[stud_num - 1].total);
    return 0;
}