//16-Base conversion of numbers
#include<stdio.h>
int main(){
	int x[10],n,b,i=0,m;
	char ch[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	printf("Enter a Decimal Number: ");
	scanf("%d",&n);
	printf("Enter a base: ");
	scanf("%d",&b);
	m=n;
	if (n==0){
		printf("%d in base %d is 0\n",m,b);
	}else{		
	while(n){
		x[i]=n%b;
		n/=b;
		i++;
	}
	printf("%d in base %d is \n",m,b);
	for (i--;i>=0;i--){
		printf("%c",ch[x[i]]);
	}
	}
}
