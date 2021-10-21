#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int mnt_dgt, USR;
    char mnt_name[500];
TOP:
    printf("\nEnter any number between 1-12 : ");
    scanf("%d", &mnt_dgt);

    switch (mnt_dgt)
    {
    case 1:
        strcpy(mnt_name, "January");
        break;
    case 2:
        strcpy(mnt_name, "February");
        break;
    case 3:
        strcpy(mnt_name, "March");
        break;
    case 4:
        strcpy(mnt_name, "April");
        break;
    case 5:
        strcpy(mnt_name, "May");
        break;
    case 6:
        strcpy(mnt_name, "June");
        break;
    case 7:
        strcpy(mnt_name, "July");
        break;
    case 8:
        strcpy(mnt_name, "August");
        break;
    case 9:
        strcpy(mnt_name, "September");
        break;
    case 10:
        strcpy(mnt_name, "October");
        break;
    case 11:
        strcpy(mnt_name, "November");
        break;
    case 12:
        strcpy(mnt_name, "December");
        break;
    default:
        printf("Wrong Input!!");
        goto TOP;
        break;
    }
    printf("\nName of the month associated with the number : %s", mnt_name);
    printf("\n\nDo you want to start from beginning?");
WRN_TYPE:
    printf("\n------------------------------------");
    printf("\n1 --> Yes\n2 --> No");
    printf("\n------------------------------------");
    printf("\nEnter 1 or 2 according to your choice : ");
    scanf("%d", &USR);

    if (USR == 1)
    {
        printf("Your answer == Yes\n");
        goto TOP;
    }
    else if (USR == 2)
    {
        printf("Your answer == No\n");
        goto END;
    }
    else if ((USR != 1) && (USR != 2))
    {
        printf("\nWrong Input!!");
        goto WRN_TYPE;
    }
END:
    printf("\nPress any key to exit......");
    getch();
    printf("\n\n");
    return 0;
}