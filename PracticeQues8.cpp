#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("Enter any number you want factorial of:");
    scanf("%d",&num);
    for(i;i<=num;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}