#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter any number you want series sum upto:");
    scanf("%d",&num);
    for(i=2;i<num;i+=2)
    {
        printf("%d\n",i);
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}