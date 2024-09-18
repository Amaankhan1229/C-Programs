#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter limit:");
    scanf("%d",&num);
    for(i;i<=num;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}