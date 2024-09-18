#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter number you want table of:\n");
    scanf("%d",&num);
    for(i;i<11;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}