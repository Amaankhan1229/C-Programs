// the sum of all even numbers between two given numbers using a do-while loop
#include<stdio.h>
int main()
{
    int i=10,j=25,sum=0;
    do
    {
        i++;
        if(i%2==0)
        {
            sum+=i;
        }
        
    } while (i<j);
    printf("sum of even numbers is %d",sum);
    return 0;
}

    
   