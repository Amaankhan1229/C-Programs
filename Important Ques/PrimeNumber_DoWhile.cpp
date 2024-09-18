//Write a C program to check whether a given number is prime or not using a do-while loop
#include<stdio.h>
int main()
{
    int num,i=1,count=0;
    printf("Enter any number:");
    scanf("%d",&num);
    do{
        if(num%i==0)
        {
            count+=1;
        }
        i+=1;

    }while(i<=num);
    if(count==2)
    {
        printf("%d is a prime number",num);     
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;
}