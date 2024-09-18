//Fibonnaci series upto 10 terms
#include<stdio.h>
int main()
{
    int term1=0,term2=1,next_term,num=10;
    printf("%d %d",term1,term2);
    int terms=2;
    while(terms<=num)
    {
        next_term=term1+term2;
        printf("%d ",next_term);
        term1=term2;
        term2=next_term;
        terms+=1;
    }
    return 0;
}

    




