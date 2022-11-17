//7-Find the sum of the series S = 1 + (½)2 + (1/3)3 +.... to 0.0001% accuracy
#include <stdio.h>
#include <math.h>
int main(){
	double term=1,sum=0;
	for(int i=2;term>0.0001;i++){
		sum+=term;
		term=1/pow(i,i);
	}
	printf("Sum of series=%f",sum);
}
