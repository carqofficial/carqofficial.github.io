#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct marks
{
    double physics;
    double maths;
    double life_sc;
    double chemistry;
    double total;
};

int main()
{
    int stud_num;
    printf("\nEnter the number of the students : ");
    scanf("%d", &stud_num);

    struct marks students[stud_num];
    struct marks total = {0, 0, 0, 0};
    int i;
    for (i = 0; i < stud_num; i++)
    {
        printf("\nFor student %d : ", (i + 1));
        printf("\nNumber in physics : ");
        scanf("%lf", &students[i].physics);
        printf("Number in maths : ");
        scanf("%lf", &students[i].maths);
        printf("Number in life_sc : ");
        scanf("%lf", &students[i].life_sc);
        printf("Number in chemistry : ");
        scanf("%lf", &students[i].chemistry);
        students[i].total = (students[i].physics + students[i].maths + students[i].chemistry + students[i].life_sc);
        total.physics += students[i].physics;
        total.maths += students[i].maths;
        total.chemistry += students[i].chemistry;
        total.life_sc += students[i].life_sc;
    }
    system("cls");
    printf("\n----------------------");
    printf("\nStudent          Total");
    printf("\n----------------------");
    for (i = 0; i < stud_num; i++)
    {
        printf("\nStudent[%d]       %.2lf", (i + 1), students[i].total);
    }
    printf("\n\n---------------------------");
    printf("\nSubject               Total");
    printf("\n---------------------------");
    printf("\nPhysics               %.2lf", total.physics);
    printf("\nMaths                 %.2lf", total.maths);
    printf("\nChemistry             %.2lf", total.chemistry);
    printf("\nLife Science          %.2lf\n\n", total.life_sc);

    return 0;
}