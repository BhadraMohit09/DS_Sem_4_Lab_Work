//Lab-7
//Perform Push, Pop and Display operations on a Stack.
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;


//Check if the stack is Empty...
int isEmptyStack(){
	return top == -1;
}

//Check if the stack is Full...
int isFullStack(){
	return top == MAX - 1;
}

//Perform Push Operation
void Push(int value){
	if(isFullStack()){
		printf("Stack is Overflow...\n");
		return;
	}
	
	stack[++top] = value;
	
	printf("%d pushed in the Stack.\n", value);
}

//Perform Pop Operation
int Pop(){
	if(isEmptyStack()){
		printf("Stack is Underflow...");
		return -1;
	}

	return stack[top--];
}

//Perform Peep Operation
int Peep(int position) {
    if (top - position + 1 < 0) {
        printf("Invalid position for PEEP...\n");
        return -1;
    } else {
        return stack[top - position + 1];
    }
}

//Perform Change Operation
void Change(int position, int value) {
    if (top - position + 1 < 0) {
        printf("Invalid position for CHANGE...\n");
    } else {
        stack[top - position + 1] = value;
        printf("Element at position %d changed to %d.\n", position, value);
    }
}

//Display Elements of Stack
void Display(){
	if(isEmptyStack()){
		printf("Stack is empty...\n");
		return;
	}
	
	printf("Elements of the Stack are: \n");
	
	for(int i = 0; i <= top; i++){
		printf("%d", stack[i]);
		printf("\t");
	}
	
	printf("\n");
}

int main(){
	//Push 15, 75, 32
	Push(15);
	Push(75);
	Push(32);

	//Change 2nd element from Top to 100
	Change(2,100);
	
	//Peep Operation on index #3
	int peepValue = Peep(3);
	if(peepValue != -1){
		printf("Peeped value is => %d\n", peepValue);
	}
	
	//Perform Pop
	Pop();
	
	//Push 14, 16
	Push(14);
	Push(16);
	
	//Display Elements
	Display();
	
	//Perform Pop
	Pop();
	
	//Push 28, 39, 49
	Push(28);
	Push(39);
	Push(49);
	
	//Display Elements
	Display();
	return 0;
}
