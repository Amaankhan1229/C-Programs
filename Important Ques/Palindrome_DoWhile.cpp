//Implement a C program to check if a given number is a palindrome using a do-while loop
#include<stdio.h>
int main()
{
    int num,reverse=0,remainder,org;
    printf("Enter any number:");
    scanf("%d",&num);
    org=num;
    do{
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
       
    }while(num>0);
    if(org==reverse)
    {
        printf("%d is a palindrome number",org);
    }
    else
    {
        printf("%d is not a palindrome number",org);
    }
return 0;
}