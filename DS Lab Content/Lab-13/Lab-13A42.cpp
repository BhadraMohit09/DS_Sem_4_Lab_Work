// Lab-13
// Implementing Circular Queue operations (EnQueue, DeQueue, Display)

#include <stdio.h>

#define SIZE 5  // Define the maximum size of the queue

int queue[SIZE];  // Array to store queue elements
int front = -1, rear = -1;  // Front and Rear pointers

// Function to perform Enqueue operation (Insertion)
void Enqueue(int value) {
    // Check if the queue is full
    if ((rear + 1) % SIZE == front) {
        printf("Queue is Full\n");
    } else {
        // If inserting the first element, set front to 0
        if (front == -1) {
            front = 0;
        }

        // Insert an element at the rear position
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to perform Dequeue operation (Deletion)
void Dequeue() {
    // Check if the queue is empty
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);

        // If there was only one element, reset front and rear
        if (front == rear) {
            front = rear = -1;
        } else {
            // Move the front pointer forward in a circular manner
            front = (front + 1) % SIZE;
        }
    }
}

// Function to display queue elements
void Display() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements: ");
        
        // Start from front and go up to rear, handling wrap-around
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;  // Stop when we reach the rear
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    // Perform various operations on the Circular Queue

    // Enqueue operations
    Enqueue(15);
    Enqueue(75);
    Enqueue(32);
    
    // Dequeue an element
    Dequeue();
    
    // Enqueue additional elements
    Enqueue(14);
    Enqueue(16);
    
    // Display the queue
    Display();
    
    // Dequeue another element
    Dequeue();
    
    // Try inserting more elements
    Enqueue(28);
    Enqueue(39);
    Enqueue(46);  // This should indicate the queue is full
    
    // Display final queue state
    Display();

    return 0;
}
