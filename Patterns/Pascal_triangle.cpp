#include<stdio.h>
int main()
{
    int value,rows=4;//value=value*(i-j+1)/j
    for(int i=0;i<=rows;i++)
    {
        for(int space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
           for(int j=0;j<=i;j++)
            {
                if((i==0)||(j==0))
                {
                    value=1;
                }
                else
                {
                    value=value*(i-j+1)/j;
                }
                printf("%d ",value);
            }
        printf("\n");
    }
    return 0;
}