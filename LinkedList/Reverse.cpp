// Here, we maintain three pointers - previous, current and next.
// Previous is used to actually reverse the linked list; next is used to maintain links.

void Reverse(struct Node* head){
	struct Node* previous = NULL;
	struct Node* next = NULL;
	struct Node* current = head;

	while(current != NULL){
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}

	head = prev;
}