// Here, we use the standard hash table method to check if the element is already present or not.
// If it is present, then we delete it, else we add it. The trick is, to delete, we'll have 
// to maintain two pointers and modify them accordingly.

void RemoveDup(struct Node* head){
	struct Node* current = head;
	struct Node* prev = NULL;
	unordered_set<int> seen;

	while(current != NULL){
		if(seen.find(current -> data) != seen.end()){
			prev -> next = current -> next;
			free(current);
		}
		else{
			seen.insert(current -> data);
			prev = current;
		}
		current = prev -> next;
	}
}