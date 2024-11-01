//Lab-16
//Search for an element in Linked List and return its position
#include <stdio.h>
#include <stdlib.h>


//Creation of Node
struct Node {
	int data;
	struct Node* next;
};

//Initialize
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	
	newNode -> data = data;
	newNode -> next = NULL;
	return newNode;
}


//Process of Inserting Nodes
void InsertNode(struct Node** head, int data) {
	struct Node* newNode = createNode(data);
	newNode -> next = *head;
	*head = newNode;
}

//Searching for a specific node position
void SearchNode(struct Node* head, int key) {
	struct Node* currentNode = head;
	
	int position = 1;
	
	while(currentNode != NULL) {
		if(currentNode -> data == key) {
			printf("Element found at position => %d \n", position);
			return;
		}
		currentNode = currentNode -> next;
		position++ ;
	}
	printf("Element not found... \n");
}

int main() {
	struct Node* head = NULL;
	
	InsertNode(&head, 10);
	InsertNode(&head, 20);
	InsertNode(&head, 30);
	InsertNode(&head, 40);
	InsertNode(&head, 50);
	
	printf("Element to search :: 30\n");
	SearchNode(head, 30);
	
	return 0;
}

