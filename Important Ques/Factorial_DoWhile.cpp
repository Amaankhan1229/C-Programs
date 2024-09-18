#include<stdio.h>
int main()
{
    int num,fact=1,i=1;
    printf("Enter a number:");
    scanf("%d",&num);
    do
    {
        fact*=i;
        i+=1;
        
    } while (i<=num);
    printf("factorial of number is %d",fact);
    return 0;
    
}