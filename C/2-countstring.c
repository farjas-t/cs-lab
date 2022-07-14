//program to count characters without using strlen()
#include <stdio.h>
int main()
{
    char str[50];
    int i,len=0;
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
		len++; 
    printf("\nLength of input string: %d",len);
    return 0;
}
