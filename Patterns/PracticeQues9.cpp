#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,num,cube;
    printf("Enter any number upto which you want cubes:");
    scanf("%d",&num);
    for(i;i<=num;i++)
    {
        cube=pow(i,3);
        printf("%d\n",cube);
    }
    return 0;
}