//3-Create a pyramid using ‘*’.
#include <stdio.h>
int main()
{
	int r,i,j;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	for (i=1; i<=r; i++)
	{
		for (j=0; j<r-i; j++)
			printf("  ");
		for (j=0; j!=2*i-1; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}

