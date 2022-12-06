//1. Sort a given list of strings.
#include <stdio.h>
#include <conio.h>
int main()
{
    
    int n,i,j;
    printf("Enter number of strings to sort : ");
    scanf("%d",&n);
    char str[n][20];
    printf("Enter the Names to Sort: \n\n");
    for(i=0; i<n; i++)
        scanf("%s",str[i]);
    printf("Sorted list of Names are: \n\n");
    for(i=65; i<122; i++)
    {
        for(j=0; j<n; j++)
        {
            if(str[j][0]==i)
                printf("\n%s",str[j]);
        }
    }
    return 0;
}
