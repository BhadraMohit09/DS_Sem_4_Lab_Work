//Lab-22
//Implement Binary Search Algorithm

#include <stdio.h>

int main(){
	
	int size;
	
	//Ask and assign the size of Array
	printf("Enter the size of Array:: ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("Enter array elements: \n");
	
	//Input user defined array elements
	for(int i = 0; i < size; i++){
		printf("Enter element #%d => ", i);
		scanf("%d", &array[i]);
	}
	
	//Ask user to search for the element
	int value;
	printf("Enter an element to search:: ");
	scanf("%d", &value);
	
	//Apply sorting algorithm to make sure array is sorted
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	//Assign the left most value of array 
	int low = 0;
	//Assign the right most value of array
	int high = size - 1;
	//Take a flag to check if element is present in the array
	int elementFound = -1;
	
	//Applying Binary Search Algorithm
	//When value of lowest most element is lesser than the highest elenent of Array
	while(low <= high){
		
		//Divide the array into two halves
		int mid = (low + high)/2;
		
		//If value of middle element is equal to searched element
		if(array[mid] == value){
			elementFound = mid;
			break;
		}
		
		//When value of searching element is less than mid value
		if(array[mid] < value){
			low = mid + 1;
		}
		//When value of searching element is greater than mid value
		else{
			high = mid - 1;
		}
	}
	
	//Check if searched element is found
	if(elementFound != -1){
		printf("Element %d found at index => %d", value, elementFound);
	}
	//Display prompted input to the user upon false conditioning
	else{
		printf("Element not found or incorrect index...");
	}
	
}
