#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            if((j>=1)&&(j<=6-i))
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}