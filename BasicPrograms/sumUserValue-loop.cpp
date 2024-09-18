#include<stdio.h>
int main()
{
    
    int num;
    int sum=0;
    printf("Enter any number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum = sum+i;
    
    }
    printf("Sum of numbers is %d",sum);
    return 0;

}