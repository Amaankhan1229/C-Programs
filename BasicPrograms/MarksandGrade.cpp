 Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and  Computer. Calculate percentage and grade according to following:
include<stdio.h>
int main()
{
    int physics,chemistry,mathematics,biology,computer,percentage,total;
    int max=500;
    printf("Enter marks of\n physics:\n chemistry:\n Biology:\n Mathematics:\n Computer:\n");
    scanf("%d%d%d%d%d",&physics,&chemistry,&mathematics,&biology,&computer);
total=physics+chemistry+biology+mathematics+computer;
percentage=total\max*100;
if(percentage>=90)
{
    printf("A grade");
}
else if((percentage>=80)&&(percentage<90))
{
    printf("B grade");
}
else if((percentage>=70)&&(percentage<80))
{
    printf("C grade");
}
else if((percentage>=60)&&(percentage<70))    
{
    printf("D grade");

}
else if((percentage>=50)&&(percentage<60))
{
    printf("E grade");

}
else
{
    printf(" Improvement required");
}
return 0;

}
