//9-Display the short form of a string.
#include<stdio.h>
int main(){
	char str[50];
	printf("Enter the string : ");
	gets(str);
	printf("Short form of the entered string : %c",str[0]);
	for(int i=1;str[i]!='\0';i++)
		if(str[i]==' '&&str[i+1]!=' ')
			printf("%c",str[i+1]);
	return 0;
}
