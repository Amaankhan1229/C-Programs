#include<stdio.h>
int main()
{
    int limit,i,j,count;
    printf("Enter any number:");
    scanf("%d",&limit);
    for(i=2;i<=limit;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
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
    }
    return 0;

}