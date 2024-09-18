4. Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%5==0)
    {
       if(num%11==0)
       {
         printf("%d is divisible by 5 and 11 both",num);
       }
       else
        printf("%d is divisible by 5 only",num);
    }
    else if(num%11==0)
    {
        if(num%5==0)
         printf("%d is divisible by 11 and 5 both",num);
         else
         {
             printf("%d is divisible by 11 only",num);
         }
    }
else
{
    printf("%d is neither divisible by 5 nor 11");
}
return 0;
}

