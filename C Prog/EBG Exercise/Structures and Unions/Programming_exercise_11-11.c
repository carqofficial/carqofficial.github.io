#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct UNIT_MET
{
    double M;
    double CM;
};
struct UNIT_BRIT
{
    double FEET;
    double INCH;
};
typedef struct UNIT_MET MET;
typedef struct UNIT_BRIT BRIT;
int ENTER_DATA(MET *metric_temp, BRIT *british_temp)
{
    int choice_input;
    printf("\n-----Units-----");
    printf("\n1. Metres");
    printf("\n2. Centimetres");
    printf("\n3. Feet");
    printf("\n4. Inches");
    printf("\n----------------");
    printf("\nEnter your choice of unit for input : ");
    scanf("%d", &choice_input);
    if (choice_input == 1)
    {
        printf("\nEnter the value of the length in metres : ");
        scanf("%lf", &metric_temp->M);
    }
    else if (choice_input == 2)
    {
        printf("\nEnter the value of the length in centimetres : ");
        scanf("%lf", &metric_temp->CM);
    }
    else if (choice_input == 3)
    {
        printf("\nEnter the value of the length in feet : ");
        scanf("%lf", &british_temp->FEET);
    }
    else if (choice_input == 4)
    {
        printf("\nEnter the value of the length in inches : ");
        scanf("%lf", &british_temp->INCH);
    }
    return (choice_input);
}
void TRANSFORM(MET *metric_temp, BRIT *british_temp, int *int_choice)
{
    int choice;
AGAIN:
    printf("\nTo convert the present unit : ");
    printf("\n-----Units-----");
    if (*int_choice == 1)
    {
        printf("\n2. Centimetres");
        printf("\n3. Feet");
        printf("\n4. Inches");
        printf("\n----------------");
        printf("\nEnter your choice of unit : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEntered invalid choice!");
            goto AGAIN;
        }
        else if (choice == 2)
        {
            metric_temp->CM = (metric_temp->M) * 100;
            printf("\nAfter converting the value became : %.2lf", metric_temp->CM);
        }
        else if (choice == 3)
        {
            british_temp->FEET = (metric_temp->M) * 3.281;
            printf("\nAfter converting the value became : %.2lf", british_temp->FEET);
        }
        else if (choice == 4)
        {
            british_temp->INCH = (metric_temp->M) * 39.37;
            printf("\nAfter converting the value became : %.2lf", british_temp->INCH);
        }
    }
    if (*int_choice == 2)
    {
        printf("\n1. Metres");
        printf("\n3. Feet");
        printf("\n4. Inches");
        printf("\n----------------");
        printf("\nEnter your choice of unit : ");
        scanf("%d", &choice);
        if (choice == 2)
        {
            printf("\nEntered invalid choice!");
            goto AGAIN;
        }
        else if (choice == 1)
        {
            metric_temp->M = (metric_temp->CM) / 100;
            printf("\nAfter converting the value became : %.2lf", metric_temp->M);
        }
        else if (choice == 3)
        {
            british_temp->FEET = (metric_temp->CM) / 30.48;
            printf("\nAfter converting the value became : %.2lf", british_temp->FEET);
        }
        else if (choice == 4)
        {
            british_temp->INCH = (metric_temp->CM) / 2.54;
            printf("\nAfter converting the value became : %.2lf", british_temp->INCH);
        }
    }
    if (*int_choice == 3)
    {
        printf("\n1. Metres");
        printf("\n2. Centimetres");
        printf("\n4. Inches");
        printf("\n----------------");
        printf("\nEnter your choice of unit : ");
        scanf("%d", &choice);
        if (choice == 3)
        {
            printf("\nEntered invalid choice!");
            goto AGAIN;
        }
        else if (choice == 1)
        {
            metric_temp->M = (british_temp->FEET) / 3.281;
            printf("\nAfter converting the value became : %.2lf", metric_temp->M);
        }
        else if (choice == 2)
        {
            metric_temp->CM = (british_temp->FEET) * 30.48;
            printf("\nAfter converting the value became : %.2lf", metric_temp->CM);
        }
        else if (choice == 4)
        {
            british_temp->INCH = (british_temp->FEET) * 12;
            printf("\nAfter converting the value became : %.2lf", british_temp->INCH);
        }
    }
    if (*int_choice == 4)
    {
        printf("\n1. Metres");
        printf("\n2. Centimetres");
        printf("\n3. Feet");
        printf("\n----------------");
        printf("\nEnter your choice of unit : ");
        scanf("%d", &choice);
        if (choice == 4)
        {
            printf("\nEntered invalid choice!");
            goto AGAIN;
        }
        else if (choice == 1)
        {
            metric_temp->M = (british_temp->INCH) / 39.37;
            printf("\nAfter converting the value became : %.2lf", metric_temp->M);
        }
        else if (choice == 2)
        {
            metric_temp->CM = (british_temp->INCH) * 2.54;
            printf("\nAfter converting the value became : %.2lf", metric_temp->CM);
        }
        else if (choice == 3)
        {
            british_temp->FEET = (british_temp->INCH) / 12;
            printf("\nAfter converting the value became : %.2lf", british_temp->FEET);
        }
    }
}

int main()
{
    MET metric;
    BRIT british;
    int input_unit;
    input_unit = ENTER_DATA(&metric, &british);
    TRANSFORM(&metric, &british, &input_unit);
    printf("\n\n");
    return 0;
}