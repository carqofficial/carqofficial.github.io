#include <stdio.h>

int main()
{
    double weight, height;
    int i, COUNT, MAX;
    printf("\nFor how many students does you want to run the program : ");
    scanf("%d", &MAX);
    COUNT = 0;

    for (i = 1; i <= MAX; i++)
    {
        if (i == 1)
        {
            printf("\nEnter the weight(in kg) and height(in cm) of %dst student : ", i);
            scanf("%lf %lf", &weight, &height);
        }
        if (i == 2)
        {
            printf("Enter the weight(in kg) and height(in cm) of %dnd student : ", i);
            scanf("%lf %lf", &weight, &height);
        }
        if (i == 3)
        {
            printf("Enter the weight(in kg) and height(in cm) of %drd student : ", i);
            scanf("%lf %lf", &weight, &height);
        }
        if (i >= 4)
        {
            printf("Enter the weight(in kg) and height(in cm) of %dth student : ", i);
            scanf("%lf %lf", &weight, &height);
        }
        if ((weight < 50) && (height > 170))
        {
            COUNT++;
        }
    }

    printf("\nNumber of students with weight less than 50 kg and height greater than 170 cm : %d\n\n", COUNT);
    return 0;
}