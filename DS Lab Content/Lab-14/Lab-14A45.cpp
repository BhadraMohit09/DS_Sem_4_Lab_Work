//Lab-14
//Perform Insertion operation at first, last and specific location of Linked List.
#include <stdio.h>
#include <stdlib.h>

//Initialize Node structure to create list of nodes
struct Node {
	int data;
	struct Node* next;
};


//Insert element at the first position of Linked list
void InsertAtFirst(struct Node** head, int data) { 

	//Allocate the memory for the node created
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//Set the data of new node of a value
	newNode -> data = data;
	//New node points to the current head of the list *head
	newNode -> next = *head;
	*head = newNode;
}

//Insert element at the last position of Linked List
void InsertAtEnd(struct Node** head, int data) {
		
	//Allocate the memory for the node created
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//Set the data of new node of a value
	newNode -> data = data;
	//Traverse the list until last node
	newNode -> next = NULL;
	
	if(*head == NULL){
		*head = newNode;
	}
	else{
		struct Node* temp = *head;
		
		while(temp -> next != NULL){
			temp = temp -> next;
		}
		
		temp -> next = newNode;
	}
}

//Insert element at specific location of Linked List
void InsertAtSpecificLocation(struct Node** head, int data, int position) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = data;
	
	if(position == 1){
		newNode -> next = *head;
		*head = newNode;
		return;
	}
	
	struct Node* temp = *head;
	
	for(int i = 1; i < position - 1 && temp != NULL; i++){
		temp = temp -> next;
	}
	
	if(temp == NULL){
		printf("Position went out of range...\n");
		free(newNode);
	}
	else{
		newNode -> next = temp -> next;
		temp -> next = newNode;
	}
}

//Display the list of elements in the Linked List
void Display(struct Node* head){
	struct Node* temp = head;
	
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}
	
	printf("\n");
}

int main(){
	struct Node* head = NULL;
	
	//Insert elements from the first node position
	InsertAtFirst(&head, 15);
	InsertAtFirst(&head, 25);
	InsertAtFirst(&head, 35);
	
	//Display the Linked List
	Display(head);
	
	return 0;
}

