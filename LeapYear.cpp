//6. Write a C program to check whether a year is leap year or not
#include<stdio.h>
int main()
{
 int year;
 printf("Enter any year:");
 scanf("%d",&year);
 if(year%4==0)
 {
    printf("given year is leap year");
 }  
 else
 {
 printf("given year is not leap year");

 }
 return 0;

}
