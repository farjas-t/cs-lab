//program to find sum of rows and columns in a matrix
#include<stdio.h>
int main(){
	int m,n,i,j,s=0;
	int a[10][10];
	printf("Enter row of matrix: ");
	scanf("%d",&m);
	printf("Enter column of matrix: ");
	scanf("%d",&n);
	printf("Enter elements of matrix :\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++){
		printf("Sum of Row %d : ",i+1);
		for(j=0;j<n;j++)
			s+=a[i][j];
		printf("%d\n",s);
		s=0;
	}
	for(i=0;i<n;i++){
		printf("Sum of Column %d : ",i+1);
		for(j=0;j<m;j++)
			s+=a[j][i];
		printf("%d\n",s);
		s=0;
	}
}
