//Create a pattern with the number N
#include<stdio.h>
int main()
{
	int n,m,i=1,d;
	printf("Enter a number for pattern:");
	scanf("%d",&n);
	m=n;
	while(m)
	{
		m/=10;
		i*=10;
	}
	while(n)
	{
		printf("%d\n",n);
		d=n/i;
		n=n-d*i;
		i/=10;
	}
	return 0;
}
