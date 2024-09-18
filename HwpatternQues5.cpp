#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        int num=1;
        for(int j=1;j<=7;j++)
        {
            if((j>=i)&&(j<=8-i))
            {
                printf("%d",num);
                j<4?num++:num--;//conditional operator
            }
            else
            {
                printf(" ");
            }

            }
        printf("\n");
        }
        return 0;
    }
   


   