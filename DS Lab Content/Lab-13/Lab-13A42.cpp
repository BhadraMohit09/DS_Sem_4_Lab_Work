//Lab-13
//Implement Circular Queue operatrions
#include <stdio.h>

#define SIZE 5  // Define the size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the queue
void Enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full\n");
    } else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to remove an element from the queue
void Dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        if (front == rear) {
            front = rear = -1;  // Queue is now empty
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

// Function to display the elements of the queue
void Display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    // Perform operations of Enqueue, Dequeue and Display elements
    
    //Enqueue: 15, 75, 32
    Enqueue(15);
    Enqueue(75);
    Enqueue(32);
    
    //Dequeue
    Dequeue();
    
    //Enqueue: 14, 16
    Enqueue(14);
    Enqueue(16);
    
    //Display elements
    Display();
    
    //Dequeue
    Dequeue();
    
    //Enqueue: 28, 39, 46
    Enqueue(28);
    Enqueue(39);
    Enqueue(46);  // This should indicate the queue is full
    
    //Display elements
    Display();
    
    return 0;
}

