#include<stdio.h>

int main()
{
int a,b,sum,sub,multiply,divide,modulus,inc,dec;
printf("Enter value of a and b:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum of a%d and b%d is %d",a,b,sum);
sub=a-b;
printf("the subtraction of a%d and b%d is %d",a,b,sub);
multiply=a*b;
printf("the multiplication of a%d and b%d is %d",a,b,multiply);
divide=a/b;
printf("the division of a%d and b%d is %d",a,b,divide);
modulus=a%b;
printf("the modulus of a%d and b%d is %d",a,b,modulus);
a=a++//post increment
printf("%d",a);
printf("value of a after increment is %d",a);
a=++a//pre increment
printf("%d",a);
}