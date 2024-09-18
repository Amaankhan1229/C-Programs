#include<stdio.h>
int main()
{
    int num,count=0,digit;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        count+=1;
        num/=10;
    }
    printf("Number of digits is %d",count);
    return 0;
}