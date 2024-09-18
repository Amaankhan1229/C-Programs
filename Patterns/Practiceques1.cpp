//print prime numbers in a given range
#include<stdio.h>
int main()
{
    int min,max,i,j,count;
    printf("Enter minimum number:\n Enter maximum number:\n");
    scanf("%d%d",&min,&max);
    i=min;
    i+=1;
    while(i<max)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            count+=1;
        }
        }
        if(count==2)
        {
            printf("%d",i);
        }
        i+=1;
    }
    return 0;
}