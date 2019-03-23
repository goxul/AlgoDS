// We can do this by two methods - either we count the total number of nodes and find the middle.
// Or, we use two pointers to keep track of things.

#include <stdio.h> 
#include <stdlib.h> 
  
/* Link list node */
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  
/* Function to get the middle of the linked list*/
void printMiddle(struct Node *head) 
{ 
   if(head != NULL){
        struct Node* slow = head;
        struct Node* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        printf("%s\n", slow -> data);
   }
} 
  
void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
        (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  
// A utility function to print a given linked list 
void printList(struct Node *ptr) 
{ 
    while (ptr != NULL) 
    { 
        printf("%d->", ptr->data); 
        ptr = ptr->next; 
    } 
    printf("NULL\n"); 
} 
  
/* Drier program to test above function*/
int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
    int i; 
  
    for (i=5; i>0; i--) 
    { 
        push(&head, i); 
        printList(head); 
        printMiddle(head); 
    } 
  
    return 0; 
} 