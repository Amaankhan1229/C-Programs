#include<stdio.h>
#include<math.h>
int main()
{
int num,num1,sum=0,rem,cube,org,digit=0;
printf("Enter any number:");
scanf("%d",&num);
org=num; // storing number in original
num1=num; // storing user's number in num1
while(num>0)
{
    digit+=1;
    // num=num/10;   123/10=12-> 12/10-> 1->1/10-> 0.1->1 coz int digit
}
printf("No of digits %d in number %d is:",digit,org);
while(num1>0)
{
    rem=num1%10;
    cube=pow(rem,digit);
    sum+=cube;
    num1=num1/10;
}
printf("%d",sum);
if(sum==org)
{
    printf("Number %d is armstrong:",org);
}
else
{
    printf("Number %d is not armstrong:",org);
}
return 0;
}

