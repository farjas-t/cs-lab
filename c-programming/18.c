//18-Fill upper triangle with 1, lower triangle with -1 and diagonal elements with 0
#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter the order:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
				a[i][j]=1;
			else if(i>j)
				a[i][j]=-1;
			else
				a[i][j]=0;
		}
	}
	printf("\n The matrix is\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}

