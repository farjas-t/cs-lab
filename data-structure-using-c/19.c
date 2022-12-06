//19. Traverse a binary search tree in inorder
#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};

struct node *create(int data){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return(newnode);
}

void inorder(struct node *root){
	if(root!=NULL)
	{
		inorder(root->left);
		printf(" %d ",root->data);
		inorder(root->right);
	}
}

int main()
{
	struct node *root=create(4);
	root->left=create(2);
	root->right=create(5);
	root->left->left=create(1);
	root->left->right=create(3);
	root->right->right=create(6);
	printf("Inorder traversal : ");
	inorder(root);
	return 0;
}
