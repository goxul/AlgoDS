#include <bits/stdc++.h>

using namespace std;

struct Node{
	struct Node* next;
	int data;
};

void Push(struct Node** headRef, int value){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = value;
	new_node -> next = *headRef;
	*headRef = new_node;

}

void InsertAtEnd(struct Node* head, int value){
	struct Node* temp = head;

	while(temp -> next != NULL) temp = temp -> next;

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node -> next = NULL;
	new_node -> data = value;
	temp -> next = new_node;
}



int Length(struct Node* head){
	struct Node* current = head;
	int count = 0;

	while(current != NULL){
		count++;
		current = current -> next;
		int i;
	}

	return count;
}

int main(int argc, char const *argv[])
{
	struct Node* head = NULL;
	
	Push(&head,100);
	Push(&head,200);
	Push(&head,300);
	Push(&head,400);
	Push(&head,500);

	InsertAtEnd(head,12345);

	struct Node* temp = head;

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp-> next;
	}

	int lenth = Length(head);

	cout << lenth;


	return 0;
}