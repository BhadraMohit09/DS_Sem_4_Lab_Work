//Lab-25
//Sorting array using Insertion Sort Algorithm
#include <stdio.h>

int main() {
    
    int size, j, key;
    
    printf("Enter the size of array:: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++){
    	printf("Enter #%d => ", i);
    	scanf("%d", &array[i]);
	}
	printf("\n");

    printf("Unsorted Array\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Start from the second element
    for (int i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
         greater than key, to one position ahead
         of their current position */
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    printf("Sorted array\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
