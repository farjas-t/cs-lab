//7-Create a singly linked list of n nodes and display it
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,num,i;
    struct node 
	{
		int val;
		struct node *nextptr;
	}*stnode,*fnNode, *tmp;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->val = num;      
        stnode->nextptr = NULL;
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->val = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr; 
            }
        }
    }
    printf("\n Data entered in the list : \n");
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->val);
            tmp = tmp->nextptr;
        }
    }
    return 0;
}
