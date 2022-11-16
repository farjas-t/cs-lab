//1-Find the sum of digits and reverse of a number.
#include<stdio.h>
int main()
{
	int n,s=0,r=0,d;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n)
	{
		d=n%10;
		s+=d;
		r=r*10+d;
		n/=10;
	}
	printf("Sumof digits = %d",s);
	printf("\nReverse of the number = %d",r);
	return 0;
}
