#include <stdio.h>

struct DT
{
    int date;
    int month;
    int year;
};
typedef struct DT DOB;

struct STUD_DATA
{
    char name[1000];
    int roll;
    double fees;
    DOB stud_dob;
};
typedef struct STUD_DATA studdata;

int main()
{
    studdata student_data;
    printf("\nEnter the student roll : ");
    scanf("%d", &student_data.roll);
    printf("Enter the name : ");
    scanf("%s", student_data.name);
    printf("Enter the fees : ");
    scanf("%lf", &student_data.fees);
    printf("Enter the DOB  : ");
    scanf("%d-%d-%d", &student_data.stud_dob.date, &student_data.stud_dob.month, &student_data.stud_dob.year);
    printf("\n***********Student's Details***********");
    printf("\nROLL No. : %d", student_data.roll);
    printf("\nNAME : %s", student_data.name);
    printf("\nFEES : %lf", student_data.fees);
    printf("\nDOB : %d-%d-%d\n\n", student_data.stud_dob.date, student_data.stud_dob.month, student_data.stud_dob.year);
    return 0;
}