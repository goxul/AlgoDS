// Here, we are given a sorted linked list and we have to remove elements which are repeated.
// The concept here is that we compare the current node with the value of the next node.
// If the values are the same, then we delete the next node. But before deleting the next node,
// make sure that we are storing the address of the next's next node.

void RemoveDuplicate(struct Node* head){
	struct Node* current = head;
	struct Node* next_next = head -> next;

	while(current -> next){
		if(current -> data == current -> next -> data){
			next_next = current -> next -> next;
			free(current -> next);
			current -> next = next_next;
		}
		else{
			current = current -> next;
		}
	}
}