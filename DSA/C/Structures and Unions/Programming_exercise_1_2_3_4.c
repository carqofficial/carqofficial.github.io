#include <stdio.h>
#include <string.h>

struct DOB
{
    int day;
    int month;
    int year;
};
struct mark
{
    double eng;
    double math;
    double computer;
};
struct data
{
    char name[1000];
    int roll;
    char sex[100];
    struct DOB DOB_STUD;
    struct mark MARK_STUD;
};
typedef struct data student_data;
int main()
{
    int num;
    printf("\nEnter the number of the student : ");
    scanf("%d", &num);
    student_data stud_enroll[num];
    double stud_avg[num + 1], class_avg;
    class_avg = 0;

    int i;
    for (i = 0; i < num; i++)
    {
        printf("\n-->For student %d : ", i + 1);
        printf("\nEnter the name : ");
        scanf(" %[^\n]%*c", (stud_enroll[i]).name);
        printf("Enter the sex(Male/Female/Transgender) : ");
        scanf("%s", (stud_enroll[i]).sex);
        printf("Enter date of birth (in dd-mm-yyyy format) : ");
        scanf("%d-%d-%d", &(stud_enroll[i]).DOB_STUD.day, &(stud_enroll[i]).DOB_STUD.month, &(stud_enroll[i]).DOB_STUD.year);
        printf("Enter the marks in English : ");
        scanf("%lf", &(stud_enroll[i]).MARK_STUD.eng);
        printf("Enter the marks in Mathematics : ");
        scanf("%lf", &(stud_enroll[i]).MARK_STUD.math);
        printf("Enter the marks in Computer Science : ");
        scanf("%lf", &(stud_enroll[i]).MARK_STUD.computer);
        stud_avg[i] = 0;
        stud_avg[i] = (((stud_enroll[i]).MARK_STUD.eng + (stud_enroll[i]).MARK_STUD.math + (stud_enroll[i]).MARK_STUD.computer) / 3);
    }

    for (i = 0; i < num; i++)
    {
        class_avg += stud_avg[i];
    }
    class_avg /= num;
    printf("\nClass average marks : %.2lf", class_avg);
    char choice_num[1000];
START:
    printf("\n\nEnter the name of the student for details : ");
    scanf(" %[^\n]%*c", choice_num);
    int count;
    count = 0;
    for (i = 0; i < num; i++)
    {
        if ((strcmp(((stud_enroll[i]).name), choice_num) == 0))
        {
            printf("\n*******************Student's Details*******************\n");
            printf("\nStudent's name : %s", (stud_enroll[i]).name);
            printf("\nStudent's sex : %s", (stud_enroll[i]).sex);
            printf("\nStudent's date of birth : %d-%d-%d", (stud_enroll[i]).DOB_STUD.day, (stud_enroll[i]).DOB_STUD.month, (stud_enroll[i]).DOB_STUD.year);
            printf("\nMarks in English : %.2lf", (stud_enroll[i]).MARK_STUD.eng);
            printf("\nMarks in Mathematics : %.2lf", (stud_enroll[i]).MARK_STUD.math);
            printf("\nMarks in Computer Science : %.2lf", (stud_enroll[i]).MARK_STUD.computer);
            printf("\nAverage marks of the three subject : %.2lf\n", stud_avg[i]);
            printf("\n*******************************************************\n\n");
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nEnterd name is not found in the database.\n");
        goto START;
    }
    return 0;
}