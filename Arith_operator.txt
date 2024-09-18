#include<stdio.h>
int main()
{
int a,b,sum,sub,multiply,divide,modulus,inc,dec;
printf("Enter value of a and b:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("the sum of %d and %d is %d",a,b,sum);
sub=a-b;
printf("the subtraction of %d and %d is %d",a,b,sub);
multiply=a*b;
printf("the multiplication of %d and %d is %d",a,b,multiply);
divide=a/b;
printf("the division of %d and %d is %d",a,b,divide);
modulus=a%b;
printf("the modulus of %d and %d is %d",a,b,modulus);
inc=a++,b++;//increments value of a by 1
printf("the increment of %d and %d is %d",a,b,inc);
dec=a--,b--;
printf("the decrement of %d and %d is %d",a,b,dec);

return 0;

}