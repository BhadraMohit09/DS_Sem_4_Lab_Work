//Lab-15
//Perform Delete operation to delete from first, delete from last and delete from specific location of Linked List
#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;  // Head pointer

// Function to insert at the end (for initial list setup)
void InsertAtLast(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete the first node
void DeleteFromFirst() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

// Function to delete the last node
void DeleteFromLast() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Function to delete a node at a specified position (0-based index)
void DeleteAtPosition(int position) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (position == 0) {
        DeleteFromFirst();
        return;
    }
    struct Node* temp = head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

// Function to display the linked list
void Display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate the operations
int main() {
    InsertAtLast(15);
    InsertAtLast(75);
    InsertAtLast(32);
    InsertAtLast(78);
    InsertAtLast(37);
    InsertAtLast(28);

    printf("Before deleting any element: ");
    Display();

    // Perform delete operations
    DeleteFromFirst();
    printf("After deleting from first: ");
    Display();

    DeleteFromLast();
    printf("After deleting from last: ");
    Display();

    DeleteAtPosition(2);
    printf("After deleting from position 2: ");
    Display();

    return 0;
}

