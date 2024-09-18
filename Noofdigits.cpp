
#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num>0)
    {
        count+=1;
        num/=10;
       
    }
    printf("No of digits in the given number is %d",count);
    return 0;
}