//4-Append 2 arrays
#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter %d elements of Array 1 : ",size1);
    for(i=0; i<size1; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter %d elements of Array 2 : ",size2);
    for(i=0; i<size2; i++)
        scanf("%d", &arr2[i]);
    for(i=0;i<size1;i++)
		merge[i]=arr1[i];
	for(i=0;i<size2;i++)
		merge[size1+i]=arr2[i];
    printf("\nThe new array after appending is:\n");
    for(i=0; i<(size1+size2); i++)
        printf("%d ", merge[i]);
    return 0;
}
