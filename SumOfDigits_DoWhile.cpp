//Create a program in C to find the sum of digits of a given number using a do-while loop.
#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter any number:");
    scanf("%d",&num);
    do{
        digit=num%10;
        sum+=digit;
        num/=10;

    }while(num>0);
    printf("%d is the sum of digits ",sum);
    return 0;

}