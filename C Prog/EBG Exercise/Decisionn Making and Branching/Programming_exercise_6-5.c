#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int app_num, i;
    printf("\nEnter the number of applicant : ");
    scanf("%d", &app_num);
    double num_math[app_num], num_phy[app_num], num_chem[app_num];
    char NAME[app_num][5000];

    for (i = 1; i <= app_num; i++)
    {
        printf("\nFor applicant no. %d : ", i);
        printf("\nEnter the marks in Mathematics : ");
        scanf("%lf", &num_math[i]);
        printf("Enter the marks in   Physics   : ");
        scanf("%lf", &num_phy[i]);
        printf("Enter the marks in  Chemistry  : ");
        scanf("%lf", &num_chem[i]);
        printf("Enter applicant's name : ");
        scanf(" %[^\n]%*c", &NAME[i]);
        /*help --> 1. https://stackoverflow.com/questions/29775323/scanfc-call-seems-to-be-skipped
                   2. https://www.geeksforgeeks.org/fgets-gets-c-language/
                   3. https://www.geeksforgeeks.org/scanfns-str-vs-getsstr-in-c-with-examples/
                   4. https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
                   5.https://www.javatpoint.com/c-gets-puts
        */
    }

    int count_el, j;
    count_el = 0;

    for (i = 1; i <= app_num; i++)
    {
        if ((num_math[i] >= 60) && (num_phy[i] >= 50) && (num_chem[i] >= 40) && (((num_chem[i] + num_math[i] + num_phy[i]) >= 200) || ((num_math[i] + num_phy[i]) >= 150)))
        {
            /*count_el++;
            switch (count_el)
            {
            case 1:
                printf("\nEligible applicants No. : ");
                printf("%d", i);
                break;

            default:
                printf(", %d", i);
                break;
            }*/
            count_el++;
            switch (count_el)
            {
            case 1:
                printf("\nEligible applicants names : ");
                printf("\n----------------------------");
                printf("\n1. %s", NAME[i]);
                break;

            default:
                printf("\n%d. %s", i, NAME[i]);
                break;
            }
        }
    }
    /*for (j = 1; j <= app_num; j++)
    {
        if (num_math[j] >= 60)
        {
            if (num_phy[j] >= 50)
            {
                if (num_chem[j] >= 40)
                {
                    if (((num_chem[j] + num_math[j] + num_phy[j]) >= 200) || ((num_math[j] + num_phy[j]) >= 150))
                    {
                        count_el++;
                        if (count_el == 1)
                        {
                            printf("\nEligible applicant no. : ");
                            printf("%d", j);
                        }
                        else if (count_el > 1)
                        {
                            printf(", %d", j);
                        }
                    }
                }
            }
        }
    }*/
    printf("\n\n");
    printf("\npress any key to exit....");
    getch();
    return 0;
}