//Reverse a given integer
#include<stdio.h>
int main()
{
    int num,reverse=0,remainder;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    printf("Reversed number is %d",reverse);
    return 0;
}