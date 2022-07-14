//program to count vowels in a string
#include<stdio.h>
int main(){
	int count=0,i;
	char str[20];
	printf("Enter a string :");
	gets(str);
	for(i=0;str[i]!='\0';++i){
		switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				count++;
				break;
			default:
				continue;
		}
	}
	printf("Number of wovels in a given string : %d",count);
	return 0;
}
