//3-Create a pyramid using ‘*’.
#include <stdio.h>
int main()
{
	int i, sp, r, k = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	for (i = 1; i <= r; ++i, k = 0)
	{
		for (sp=1; sp<=r-i; ++sp)
			printf("  ");
		while (k != 2 * i - 1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}
	return 0;
}

