//11-Find the amstrong numbers within a given range
#include<stdio.h>
int main(){
	int a,b,s,t,d;
	printf("Enter the Range : ");
	scanf("%d%d",&a,&b);
	printf("Amstrong Numbers in the range: %d to %d",a,b);
	for (int i=a; i<=b; i++){
		s=0;
		t=i;
		while(t){
			d=t%10;
			s=s+d*d*d;
			t/=10;
		}
		if (i==s)
			printf("\n%d ",i);
	}
}
