//23. Implement selection sort.
#include <stdio.h> 
int main() 
{ 
	int i, j, temp,n,min;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : ",n);
	for (i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	for (i = 0; i < n-1; i++) 
	{ 
		min = i; 
		for (j = i+1; j < n; j++) 
			if (arr[j] < arr[min]) 
				min = j; 
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("Sorted array is : ");
	for (i = 0; i < n; i++)
		printf(" %d ",arr[i]);
	return 0; 
} 
