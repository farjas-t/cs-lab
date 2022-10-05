//8-Delete a given node from a singly linked list
#include<stdio.h>
#include<stdlib.h>
void removeatspecific(int key);
void creat();
void display();
struct node
{
 int data;
 struct node *next;
};
struct node *start=NULL;
struct node *current;
struct node *temp;

int main()
{
	int key;
	creat();
	display();
	printf("\n\nEnter the value to be removed : ");
	scanf("%d",&key);
	removeatspecific(key);
	display();
}

void creat()
{
	int ch;
	do{
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		if(newnode==NULL){
			printf("\nempty list\n");
			exit(0);
		}
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL){
			start=newnode;
			current=newnode;
		}
		else{
			current->next=newnode;
			current=newnode;
		}
		printf("Do you want to continue? (Enter 0 for No): ");
		scanf("%d",&ch);
	}while(ch!=0);
}

void removeatspecific(int key)
{
	current=start;
	while(current->data!=key)
	{
		if(current->next==NULL){
			printf("\nthe given node is not found !\n");
			exit(0);
		}
		temp=current;
		current=current->next;
	}
	temp->next=current->next;
	free(current);
	printf("\nDeleted %d from Linked List!\n",key);
}

void display()
{
	printf("\nThe linked list :\n");
	current=start;
	while(1)
	{
		if(current->next!=NULL){
			printf("%d--->",current->data); 
			current=current->next;
		}
		else{
			printf("%d--->NULL",current->data);
			break;
		}
	}
}
