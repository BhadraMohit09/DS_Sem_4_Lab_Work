#include <Stdio.h>

int main() {
	int size;
	printf("Enter the size for array elements:: ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("Enter array elements: \n");
	
	for(int i = 0; i < size; i++){
		printf("Enter #%d => ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Unsorted Array is: \n");
	
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	int min_index;
	
	for(int i = 0; i < size - 1; i++){
		min_index = i;
		
		for(int j = i + 1; j < size; j++){
			if(array[j] < array[min_index]){
				min_index = j;
			}
		}
		
		int temp = array[min_index];
		array[min_index] = array[i];
		array[i] = temp;
	}
	
	printf("Sorted Array: \n");
	
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}

