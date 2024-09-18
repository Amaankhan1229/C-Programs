#include<stdio.h>
int main()
{
    int size=5;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            if((i==1)||(i==size)||(j==1)||(j==size)||(i==3)||(j==3))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}