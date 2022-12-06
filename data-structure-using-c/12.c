//12. Addition of 2 polynomials using array.
#include<stdio.h>
#include<math.h>
struct poly
{
		int coeff;
		int exp;
};
struct poly a[50],b[50],c[50],d[50];
int main()
{
	int i,deg1,deg2,k=0,l=0,m=0;
	printf("Enter the highest degree of polynomial 1");
	scanf("%d",&deg1);
	for(i=0;i<=deg1;i++)
	{
		printf("Enter the coefficient of x^%d :",i);
		scanf("%d",&a[i].coeff);
		a[k++].exp=i;
	}
	printf("Enter the highest degree of polynomial 2");
	scanf("%d",&deg2);
	for(i=0;i<=deg2;i++)
	{
		printf("Enter the coefficient of x^%d :",i);
		scanf("%d",&b[i].coeff);
		b[l++].exp=i;
	}
	printf("\n Expression 1= %d",a[0].coeff);
	for(i=1;i<=deg1;i++)
	{
		printf("+ %dX^%d ",a[i].coeff,a[i].exp);
	}
	printf("\n Expression 2= %d",b[0].coeff);
	for(i=1;i<=deg2;i++)
	{
		printf("+ %dX^%d ",b[i].coeff,b[i].exp);
	}
	if(deg1>deg2)
	{
		for(i=0;i<=deg2;i++)
		{
			c[m].coeff=a[i].coeff+b[i].coeff;
			c[m].exp=a[i].exp;
			m++;
		}
		for(i=deg2+1;i<=deg1;i++)
		{
			c[m].coeff=a[i].coeff;
			c[m].exp=a[i].exp;
			m++;
		}
	}
	else
	{
		for(i=0;i<=deg1;i++)
		{
			c[m].coeff=a[i].coeff+b[i].coeff;
			c[m].exp=a[i].exp;
			m++;
		}
		for(i=deg1+1;i<=deg2;i++)
		{
			c[m].coeff=b[i].coeff;
			c[m].exp=b[i].exp;
			m++;
		}
	}
	printf("\nExpression after addition=%d",c[0].coeff);
	for(i=1;i<m;i++)
	{
		printf("+%dx^%d",c[i].coeff,c[i].exp);
	}
	return 0;
}
