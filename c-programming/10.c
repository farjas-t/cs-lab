//10-Find the currency denomination of a given amount.
#include<stdio.h>
int main()
{
	int a,i=0,d,n=0;
	int b[ ]={2000,500,100,50,20,10,5,2,1};
	printf("Enter the amount:");
	scanf("%d",&a);
	while(a>0)
	{
		d=a/b[i];
		if(d){
			printf("Number of %d notes is %d\n",b[i],d);
		}
		n=n+d;
		a=a%b[i];
		i++;
	}
	printf("Total number of currency notes=%d\n",n);

}
