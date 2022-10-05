//1-Reverse a string using pointers
#include <stdio.h>
#include <string.h>
int main()
{
	char str[50],*ptr;
	int len,i;
	printf("Enter a String: ");
	gets(str);
	ptr=str;
	len=strlen(str);
	printf("The Reverse of the String is:");
	for(i=len;i>=0;i--)
		printf("%c",*(ptr+i));
}

