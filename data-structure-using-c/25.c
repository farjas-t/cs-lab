//25. Implement quick sort.
#include <stdio.h>

void quicksort(int list[10],int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(list[i]<=list[pivot]&&i<last)
				i++;
			while(list[j]>list[pivot])
				j--;
			if(i<j)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		temp=list[pivot];
		list[pivot]=list[j];
		list[j]=temp;
		quicksort(list,first,j-1);
		quicksort(list,j+1,last);
		
	}
	
}
int main()
{	
	int i, count, number[25];
	printf("Enter the number of elemental : ");	
	scanf("%d",&count);	
	printf("Enter %d elements : ", count);
	for(i=0;i<count;i++)		
		scanf("%d",&number[i]);	
	quicksort(number,0,count-1);
	printf("The Sorted Order is : ");
	for(i=0;i<count;i++)	
		printf(" %d ",number[i]);
	return 0;
	
}
