//24. Implement insertion sort.
#include <stdio.h> 
int main() 
{ 
	int i, j, n, key;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d numbers : ",n);
	for (i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (key < arr[j] && j >= 0) {
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
	printf("Sorted array is : ");
	for (i = 0; i < n; i++)
		printf(" %d ",arr[i]);
	return 0; 
} 
