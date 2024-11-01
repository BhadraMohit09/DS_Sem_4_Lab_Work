//Lab-23
//Sorting array using Bubble Sort Algorithm
#include <stdio.h>

int main() {
    int size, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
    	printf("Enter #%d => ", i);
        scanf("%d", &array[i]);
    }

    printf("Unsorted Array\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Outer loop: Iterate through the array from 0 to n-1
    for (i = 0; i < size - 1; i++) {
        // Inner loop: Iterate through the unsorted part of the array
        for (j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements and swap if needed
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
