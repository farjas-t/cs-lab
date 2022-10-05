//9-Create a doubly linked list of integers and display in forward and backward direction
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;
void createList(int n);
void displayListFromFirst();
void displayListFromEnd();
int main() {
    int n;
    head = NULL;
    last = NULL;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);
    createList(n);
    printf("\n\nLinked list in forward direction :\n");
    displayListFromFirst();
    printf("\n\nLinked list in backward direction :\n");
    displayListFromEnd();
    return 0;
}
void createList(int n) {
    int i, data;
    struct node *newNode;
    if(n >= 1) {
        head = (struct node *)malloc(sizeof(struct node));
        if(head != NULL) {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);
            head->data = data;
            head->prev = NULL;
            head->next = NULL;
            last = head;
            for(i=2; i<=n; i++) {
                newNode = (struct node *)malloc(sizeof(struct node));
                if(newNode != NULL){
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);
                    newNode->data = data;
                    newNode->prev = last;
                    newNode->next = NULL;
                    last->next = newNode;
                    last = newNode;
                }
                else {
                    printf("Unable to allocate memory.");
                    break;
                }
            }
            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY");
        }
        else {
            printf("Unable to allocate memory");
        }
    }
}

void displayListFromFirst() {
    struct node * temp;
    if(head == NULL) {
        printf("List is empty.");
    }
    else {
        temp = head;
        while(temp != NULL) {
            printf(" %d --> ", temp->data);
            temp = temp->next;
            if(temp==NULL) printf(" NULL ");
        }
    }
}
void displayListFromEnd() {
    struct node * temp;
    if(last == NULL) {
        printf("List is empty.");
    }
    else {
        temp = last;
        while(temp != NULL) {
            printf(" %d --> ", temp->data);
            temp = temp->prev; 
            if(temp==NULL) printf(" NULL ");
        }
    }
}
