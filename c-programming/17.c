//17-merge two arrays in sorted order
#include<stdio.h>
int main()
{
	int s1,s2,arr1[50],arr2[50],merge[100],tmp,i,j;
	printf("Enter no of elements of array1:");
	scanf("%d",&s1);
	printf("Enter the no of elemnts of array2:");
	scanf("%d",&s2);
	printf("Enter elements of array 1 : "); 
	for(i=0;i<s1;i++)
		scanf("%d",&arr1[i]);
	printf("Enter elements of array 2 : "); 
	for(i=0;i<s2;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<s1;i++)
		merge[i]=arr1[i];
	for(j=0;j<s2;j++)
		merge[i+j]=arr2[j];
	for(i=0;i<s1+s2;i++){
		for(j=0;j<s1+s2;j++){
			if(merge[i]<merge[j]){
				tmp=merge[i];
				merge[i]=merge[j];
				merge[j]=tmp;
			}
		}
	}
		printf("Merged array in Ascending order : ");
		for(i=0;i<s1+s2;i++)
			printf("%d ",merge[i]);
}
			
			
		
	
	



