//program to count number of words in a given string
#include<stdio.h>
int main()
{
	char s[200];
	int count=1,i;
	printf("Enter the string\n");
	scanf("%[^\n]s", s);
	for (i=0; s[i]!='\0';i++)
	{
		if (s[i]==' ')
		++count;
	}
	printf("Number of words in the string are: %d\n", count);
	return 0;
}
