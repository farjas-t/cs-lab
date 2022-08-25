#include<stdio.h>
int main(){
	int a[10][10],b[10][3],r,c,i,j,s=0;
	printf("----------------\nSPARSE MATRIX\n================\n\n");
	printf("Enter the no of rows and columns : ");
	scanf("%d %d",&r,&c);
	printf("\nEnter the %dx%d matrix : \n",r,c);
	for(i=0;i<r;++i){
		for(j=0;j<c;++j)
			scanf("%d",&a[i][j]);
	}
	printf("\nThe actual matrix : \n");
	for(i=0;i<r;++i){
		printf("\n");
		for(j=0;j<c;++j)
			printf("  %d",a[i][j]);
	}
	for(i=0;i<r;++i){
		for(j=0;j<c;++j){
			if(a[i][j]!=0){
				b[s][0]=a[i][j];
				b[s][1]=i;
				b[s][2]=j;
				s++;
			}
		}
	}
	printf("\n\nThe sparse matrix : \n");
	for(i=0;i<s;++i){
		printf("\n");
		for(j=0;j<3;++j)
			printf("  %d",b[i][j]);
	}
}
