//Lab-21
//Linear Search to find the location of input element.
#include <stdio.h>

int main(){
	
	int size;
	
	//Ask user input for the size of array
	printf("Enter the size of array:: ");
	scanf("%d", &size);
	
	int array[size];
	
	//Let the user enter defined elements of the size
	printf("Enter array elements: \n");
	for(int i = 0; i < size; i++){
		printf("Enter #%d =>", i+1);
		scanf("%d", &array[i]);
	}	
	
	int elementToSearch;
	
	//Ask user for element to search
	printf("Enter element to search::");
	scanf("%d", &elementToSearch);
	
	int index = -1;
		
	//Linear Search 
	for(int i = 0 ; i < size; i++){
		//If element is found in the array
		if(array[i] == elementToSearch){
			index = i;
			break;
		}
	}
	
	//Return with the index found for the entered element
	if(index != -1){
		printf("Element %d found at index => %d", elementToSearch, index);	
	}
	//Invalid user inputs or elements not found
	else{
		printf("Element not found...");
	}
	
	return 0;
}
