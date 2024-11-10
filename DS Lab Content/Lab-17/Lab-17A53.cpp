//Lab-17
//Count the node operation on Linked List
#include <stdio.h>
#include <stdlib.h>

//Create Node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create linked list: Start -> 15 -> 75 -> 32 -> 78 -> 37 -> 28
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 15;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 75;
    head->next = second;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 32;
    second->next = third;

    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    fourth->data = 78;
    third->next = fourth;

    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));
    fifth->data = 37;
    fourth->next = fifth;

    struct Node* sixth = (struct Node*)malloc(sizeof(struct Node));
    sixth->data = 28;
    fifth->next = sixth;

    sixth->next = NULL;  // Last node points to NULL

    // Counting number of nodes
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    printf("Number of nodes in the linked list:: %d\n", count);

    // Free allocated memory
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

