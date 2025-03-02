// Lab-12
// Implementing EnQueue, DeQueue, and Display operations in a Simple Queue

#include <stdio.h>

#define Size 5 // Define the maximum size of the queue

// Initialize queue array and front & rear pointers
int items[Size], front = -1, rear = -1;

// Function to perform EnQueue (Insertion) operation
void EnQueue(int value) {
    // Check if the queue is full
    if (rear == Size - 1) {
        printf("Queue is Full...\n");
    } else {
        // If inserting the first element, set front to 0
        if (front == -1) {
            front = 0;
        }

        // Insert an element at the rear
        rear++;
        items[rear] = value;
        printf("Inserted %d in Queue\n", value);
    }
}

// Function to perform DeQueue (Deletion) operation
void DeQueue() {
    // Check if the queue is empty
    if (front == -1) {
        printf("Queue is Empty...\n");
    } else {
        printf("Deleted %d from Queue\n", items[front]);

        // Move the front pointer forward
        front++;

        // If the queue is empty after deletion, reset front and rear
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Function to display queue elements
void Display() {
    // Check if the queue is empty
    if (rear == -1) {
        printf("Queue is Empty...\n");
    } else {
        printf("\nQueue elements are: \n");

        // Display all elements from front to rear
        for (int i = front; i <= rear; i++) {
            printf("%d ", items[i]);
        }
        printf("\n");
    }
}

int main() {
    // Insert elements into the queue
    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);

    // Display current queue elements
    Display();

    // Delete elements from the queue
    DeQueue();
    DeQueue();

    // Display updated queue elements
    Display();

    return 0;
}
