// Here, we are pairiwise swapping with the help of links, and not the data. 


struct Node* PairwiseSwapLink(struct Node* head){
	if(head == NULL || head -> next == NULL) return; // Termination condition.

	struct Node* remaining = head -> next -> next; // We store the address of the part ahead of the second node.
	struct Node* newhead = head -> next; // We assign a new head.
	head -> next -> next = head; // Making other relevant changes. 
	head -> next = PairwiseSwapLink(remaining);

	return newhead;
}