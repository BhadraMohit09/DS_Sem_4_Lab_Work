//Lab-12
//Implement EnQueue, DeQueue and Display operations in Simple Queue.
#include <stdio.h>

#define Size 5

//Initialize variables to store elements, two  pointers front and rear to handle logics.
int items[Size], front = -1, rear = -1;


//Perform Enqueue operation
void EnQueue(int value){
	
	//Check if Queue is not full
	if(rear == Size - 1){
		printf("Queue is Full...");
	}
	else{
		//Assign pointer for front to index of 0
		if(front == -1){
			front = 0;
		}
		
		//Insert an element in the Queue
		rear++;
		items[rear] = value;
		
		printf("Inserted %d in Queue \n", value);
	}
}


//Perform Dequeue operation
void DeQueue(){
	//Check for Empty Queue
	if(front == -1){
		printf("Queue is Empty...");
	}
	else{
		printf("Deleted %d from Queue\n", items[front]);
		
		front++;
		//Remove the element from Front
		if(front > rear){
			front = rear = -1;
		}
	}
}


//Display Queue elements
void Display(){
	
	//Check if Queue is empty
	if(rear == -1){
		printf("Queue is Empty...");
	}
	else{
		printf("\n");
		printf("Queue elements are:: \n");
		
		//Display elements of Queue
		for(int i = front; i <= rear; i++){
			printf("%d ", items[i]);
		}
	}
	printf("\n");
}

int main(){
	
	
	//Perform EnQueue operation
	EnQueue(10);
	EnQueue(20);
	EnQueue(30);
	EnQueue(40);
	EnQueue(50);
	
	//Display elements
	Display();
	
	//Delete any element
	DeQueue();
	DeQueue();
	
	//Display elements
	Display();
	
	return 0;
}
