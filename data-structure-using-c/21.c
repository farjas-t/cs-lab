//21-Search an element in a binary search tree
#include <stdio.h>
#include <stdlib.h>

struct node { 
    int val; 
    struct node *left, *right; 
}; 

struct node* newNode(int item) {
    struct node* temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->val = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

int search(struct node* root, int value) { 
    while (root != NULL){
        if (value > root->val) 
            root = root->right; 
        else if (value < root->val) 
            root = root->left; 
        else
            return 1;
    } 
    return 0; 
} 

int main() 
{ 
	int item,flag;
    struct node* root = newNode(21);
    root->left = newNode(16);
    root->right = newNode(25);
    root->left->left = newNode(10);
    root->left->right = newNode(18);
    root->right->left = newNode(22);
    root->right->right = newNode(28);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(12);
    printf("Enter element to search in the tree : ");
    scanf("%d",&item);
    flag = search(root,item);
    if(flag)
        printf("%d value is found in the tree",item);
    else
        printf("%d value not found",item);
    return 0; 
} 
