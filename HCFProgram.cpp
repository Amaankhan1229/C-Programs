
//Develop a C program to find the GCD (Greatest Common Divisor) of two numbers using a do-while loop.
#include<stdio.h>
int main()
{
    int num1,num2,i=2,HCF,smaller;
    printf("Enter first and second number:");
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    {
        smaller=num1;
    }
    else
    {
        smaller=num2;
    }
    do
    {
        if((num1%i==0)&&(num2%i==0)){
            HCF=i;
        }
        i+=1;
    } while (i<=smaller);
    printf("%d the greatest common divisor of %d and %d",HCF,num1,num2);

    return 0;
    
}