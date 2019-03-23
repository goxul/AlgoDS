// We implement a simple recursive solution where we can pairwise swap the elements
// Since it is a void function, it doesn't have to return anything.


void PairWiseSwap(struct Node* head){
	if(head != NULL && head -> next != NULL){
		swap(&head -> data, &head -> next -> data);
		PairWiseSwap(head -> next -> next);
	}
}