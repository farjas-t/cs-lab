//program to find product of two matrices
#include<stdio.h>
int main(){
	int m,n,p,q,i,j,k;
	int a[10][10],b[10][10],r[10][10];
	printf("Enter row of matrix A: ");
	scanf("%d",&m);
	printf("Enter column of matrix A: ");
	scanf("%d",&n);
	printf("Enter row of matrix B: ");
	scanf("%d",&p);
	printf("Enter column of matrix B: ");
	scanf("%d",&q);
	printf("Enter elements of matrix A:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements of matrix B:\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
				
			
	if(m==q&&n==p){
		for(i=0;i<m;i++)
			for(j=0;j<q;j++){
				r[i][j]=0;
				for(k=0;k<p;k++)
					r[i][j]+=a[i][k]*b[k][j];
			}
	}	
	
	printf("Product of the matrices :\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++)
			printf("%d  ",r[i][j]);
		printf("\n");
	}
	return 0;
}
