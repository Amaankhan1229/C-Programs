#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,cube,rem,org;
    printf("Enter any 3 digit number:");
    scanf("%d",&num);
    org=num;
    while(num>=0)
    {
        rem=num%10;
        cube=pow(rem,3);
        sum=sum+cube;
        num=num/10;
    }
    printf("%d",sum);
    if(org==sum)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }
    return 0;

}