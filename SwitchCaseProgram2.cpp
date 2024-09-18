//Using switch case print name of month with 30,31,28 days
#include<stdio.h>
int main()
{
    int month,days;
    printf("Enter month's number:");
    scanf("%d",&month);

    switch(month)
    {
        case 4:
        days=30;
        printf("Month with %d days is April",days);
        break;
        case 6:
        days=30;
        printf("Month with %d days is June",days);
        break;
        case 9:
        days=30;
        printf("Month with %d days is September",days);
        break;
        case 11:
        days=30;
        printf("Month with %d days is November",days);
        break;
        case 1:
        days=31;
        printf("Month with %d days is January",days);
        break;
        case 3:
        days=31;
        printf("Month with %d days is March",days);
        break;
        case 5:
        days=31;
        printf("Month with %d days is May",days);
        break;
        case 7:
        days=31;
        printf("Month with %d days is July",days);
        break;
        case 8:
        days=31;
        printf("Month with %d days is August",days);
        break;
        case 10:
        days=31;
        printf("Month with %d days is October",days);
        break;
        case 12:
        days=31;
        printf("Month with %d days is December",days);
        break;
        case 2:
        days=28;
        printf("Month with %d days is Feburary");
        break;
        default:
        printf("%d month is invalid",month);
    }
    return 0;
}