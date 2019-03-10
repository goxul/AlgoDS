#include <bits/stdc++.h>
using namespace std;

struct Node{
	struct Node* next;
	int data;
};

int lengthRecursive = 0;
int freq = 0;

void Print(struct Node* head){
	struct Node* temp = head;
	int count = 0;

	if(head == NULL) cout << "List is empty." << endl;

	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;
}


void Push(struct Node** head, int value){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = value;
	new_node -> next = *head;
	*head = new_node;
}


void DeleteAtN(struct Node** head, int n){
	struct Node* prev = *head;
	struct Node* fwd = prev -> next;

	if(n == 0){
		*head = (*head)-> next;
		free(prev);
		return;
	}

	while(n-1){
		prev = fwd;
		fwd = fwd -> next;
		n--;
	}

	prev -> next = fwd -> next;
	free(fwd);

}

int DataAtN(struct Node* head, int n){
	struct Node* temp = head;

	while(n--){
		temp = temp -> next;
	}

	return temp->data;

}


void Delete(struct Node** head, int key){
	struct Node* first = *head; // Can also be called previous
	struct Node* second = first -> next; // One where actual work happens

	//Edge case: To delete the head itself

	if(first -> data == key){
		*head = first -> next;
		free(first);
		return;
	}
	
	while(second -> data != key){
		first = second;
		second = second -> next;
		
	}

	first -> next = second -> next;

	free(second);

}


int DetectLoop(struct Node* head){

	struct Node* slow_ptr = head;
	struct Node* fast_ptr = head;
	int count = 0;

	while(slow_ptr && fast_ptr && fast_ptr -> next){
		slow_ptr = slow_ptr -> next;
		fast_ptr = fast_ptr -> next	-> next;
		

		if(slow_ptr == fast_ptr){
			cout << "Loop found" << endl;
			return 1;
		}
	}

	return 0;

}

void lengthOfLoop(struct Node* head){
	struct Node* slow_ptr = head;
	struct Node* fast_ptr = head;
	int count = 0;

	while(slow_ptr && fast_ptr && fast_ptr -> next){
		slow_ptr = slow_ptr -> next;
		fast_ptr = fast_ptr -> next -> next;

		if(slow_ptr == fast_ptr -> next) break;
	}


	cout << slow_ptr <<" "<< fast_ptr << " " << fast_ptr -> next;

}

int Length(struct Node* head){
	struct Node* temp = head;
	int count = 0;

	while(temp != NULL){
		count++;
		temp = temp -> next;
	}

	return count;
}


void LengthRecursive(struct Node* head){
	struct Node* temp = head;

	if(head == NULL) return;
	lengthRecursive++;
	LengthRecursive(temp->next);
}

int countItems(struct Node* head, int key){
	struct Node* temp = head;
	int count = 0;

	while(temp != NULL){
		if(temp -> data == key) count++;
		temp = temp -> next; 
	}

	return count;
}


int countRecursive(struct Node* head, int key){
	if(head == NULL) return freq;
	if(head -> data == key) freq++;
	return countRecursive(head->next, key);
}

int Reverse(struct Node** head){
	
}

int main(int argc, char const *argv[])
{
	struct Node* head = NULL;

	Push(&head, 1);
	Push(&head, 2);
	Push(&head, 200);
	Push(&head, 100);
	Push(&head, 500);
	Push(&head, 600);

	head->next->next->next->next = head;

	lengthOfLoop(head);



	return 0;
}