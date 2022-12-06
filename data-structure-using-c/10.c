//10-Create a singly linked list and search an element from that list.
#include <stdio.h>  
#include <stdbool.h>  
   
struct node{  
    int data;  
    struct node *next;  
};      

struct node *head, *tail = NULL;  
    
void addNode(int data) {  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;   
    if(head == NULL) {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode; 
        tail = newNode;  
    }  
}  
   
void searchNode(int data) {  
    struct node *current = head;  
    int i = 1;  
    bool flag = false;  
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        while(current != NULL) {  
            if(current->data == data) {  
                flag = true;  
                break;  
            }  
            i++;  
            current = current->next;  
        }  
    }  
    if(flag)  
         printf("Element is present in the list at the position: %d\n", i);  
    else  
         printf("Element is not present in the list\n");  
}  
      
int main()  
{  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
    searchNode(2);  
    searchNode(7);  
    return 0;  
}  
