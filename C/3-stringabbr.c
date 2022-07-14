//program to print abbreviation of a string
#include<stdio.h>
int main(){
	char str[50],abbr[10];
	int i,j=1;
	printf("Enter the string : ");
	gets(str);
	abbr[0]=str[0];
	for(i=1;str[i]!='\0';i++){
		if(str[i]==' '){
			abbr[j]=str[i+1];
			j++;
		}
	}
	printf("Abbreviation of the string : %s",abbr);
	return 0;
}
