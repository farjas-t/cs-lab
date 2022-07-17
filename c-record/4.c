//4-Find the number of words in a sentence.
#include <stdio.h>
void main()
{
	char s[50];
	int c=0,i;
	printf("Enter the string:\n");
	gets(s);
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]==' '&&s[i+1]!=' ')
			c++;    
	}
	printf("Number of words in given string : %d\n",c+1);
}
