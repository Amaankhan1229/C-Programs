//Develop a C program to find the LCM(Least common multiple) of two numbers using a do-while loop.
#include<stdio.h>
int main()
{
    int num1,num2,greater;
    printf("Enter first and second number:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        greater=num1;
    }
    else
    {
        greater=num2;
    }
    do
    {
        if((greater%num1==0)&&(greater%num2==0))
        {
            printf("LCM of given two numbers is %d",greater);
            break;
        }   
        greater+=1;
    } while (1);

    return 0;
    
}