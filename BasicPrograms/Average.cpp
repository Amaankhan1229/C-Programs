//Develop a C program to calculate the average of n numbers entered by the user using a do-while loop.
#include<stdio.h>
int main()
{
    int limit,num,sum=0,average;
    printf("Enter limit of numbers you want to find average of:");
    scanf("%d",limit);
    for(limit;limit>0;limit--)
    {
        printf("Enter the number:");
        scanf("%d",num);
        sum+=num;
    }
    average=sum/limit;
    printf("The average of given numbers is %d",average);
    return 0;
}