//7-Find the sum of the series S = 1 + (½)2 + (1/3)3 +.... to 0.0001% accuracy
#include <math.h>
#include <stdio.h>
int main
{
    double term,sum=0;
    int i=1,flag;
    for(i=1;i<=10;++i)
    {
        term=1/pow(i,i);
        sum+=term;
    }
    if(sum>0.000001)
        printf("Sum of series=%f",sum);
}
