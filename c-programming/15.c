//15-Write odd and even numbers into seperate files
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f1,*f2;
	int n,num;
	printf("Enter size :");
	scanf("%d",&n);
	f1=fopen("EVEN","wb");
	f2=fopen("ODD","wb");
	printf("Enter the numbers : ");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if (num%2==0)
			putw(num,f1);
		else
			putw(num,f2);
	}
	fclose(f1);
	fclose(f2);
	f1=fopen("EVEN","rb");
	printf("\nEVEN NUMBERS : ");
	while(1){
		num=getw(f1);
		if(feof(f1)) break;
		printf(" %d",num);
	}
	f2=fopen("ODD","rb");
	printf("\nODD NUMBERS : ");
	while(1){
		num=getw(f2);
		if(feof(f2)) break;
		printf(" %d",num);
	}
	fclose(f1);
	fclose(f2);
}
