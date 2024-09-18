//Create a C program to print the Fibonacci series up to a given limit using a do-while loop
#include<stdio.h>
int main()
{
    int t1=0,t2=1,next_term,terms=2,num=10;
    printf("%d %d",t1,t2);
    do{
        next_term=t1+t2;
        printf("%d",next_term);
        t1=t2;
        t2=next_term;
        terms+=1;

    }while(terms<=num);
    
    return 0;

}