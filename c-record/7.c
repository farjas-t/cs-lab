//7-Find the sum of the series S = 1 + (½)2 + (1/3)3 +.... to 0.0001% accuracy
#include <math.h>
#include <stdio.h>
int main()
{
	int n,i;
	double sums = 0.0, ser;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for (i = 1; i <= n; ++i) {
		ser = 1 / pow(i, i);
		sums+=ser;
	}
	printf("Sum of %d terms : %.5f",n,sums);
	return 0;
}
