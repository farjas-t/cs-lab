//13-Check for pallindrome string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],temp[20];
	printf("Enter the string:");
	gets(str1);
	strcpy(temp,str);
    strrev(str);
	if (strcmp(temp,str))
		printf("Entered String %s is not pallindrome",temp);
	else 
		printf("Entered String %s is pallindrome",temp);
}

