//program to find sum of two matrices
#include<stdio.h>
int main(){
	int m,n,i,j;
	int a[10][10],b[10][10],s[10][10];
	printf("Enter row of matrix: ");
	scanf("%d",&m);
	printf("Enter column of matrix: ");
	scanf("%d",&n);
	printf("Enter elements of matrix A:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements of matrix B:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);		
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			s[i][j]=a[i][j]+b[i][j];
	printf("Sum of the matrices :\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%d  ",s[i][j]);
		printf("\n");
	}
	return 0;
}
