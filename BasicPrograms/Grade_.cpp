#include<stdio.h>
int main()
{
int percentage;
Printf("Enter Percentage obtained by a student:");

Scanf("%d",&percentage);
if(percentage>=90)
{
Printf(" A grade");
}
else if((percentage>=80)&&(percentage<90))
{
Printf(" B grade");
}
else if((percentage>=70)&&(percentage<80))
{
Printf("C grade");
}
else if((percentage>=60)&&(percentage<70))  
{
Printf("D grade");
}
else if((percentage>=50)&&(percentage<60))
{
Printf("E grade");
}
else if((percentage>=40)&&(percentage<50))
{
Printf("F grade");
}
else
Printf("Fail");
return 0;

}
