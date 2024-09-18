//Sum of cubes of n numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,num,sum=0,cube;
    printf("Enter any number upto what you want sum of cubes:\n");
    scanf("%d",&num);
    for(i;i<num;i++)
    {
        cube=pow(i,3);
        printf("%d\n",cube);
        sum+=cube;
    }
    printf("%d",sum);
    return 0;
}