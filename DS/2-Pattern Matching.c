#include<stdio.h>
int main(){
	char str1[80],str2[80];
	int l,i,j;
	printf("----------------\nPATTERN MATCHING\n================\n\n");
	printf("Enter the first string : ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	for(l=0;str2[l]!='\0';l++);
	for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++){
		if(str1[i]==str2[j])
			j++;
		else
			j=0;
	}
	if(j==l)
		printf("\nSubstring found at position %d",i-j+1);
	else
		printf("Substring not found");
		
	return 0;
}
