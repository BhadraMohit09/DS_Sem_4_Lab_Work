// Lab-23
// Sorting an array using the Bubble Sort Algorithm

#include <stdio.h> // Include standard input-output library

int main() {
    int size, i, j, temp; // Variables for size, loop counters, and swapping

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size]; // Declare an array of the given size (VLA - Variable Length Array)

    // Input elements from the user
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        printf("Enter #%d => ", i); // Display index for better user experience
        scanf("%d", &array[i]); // Read element into the array
    }

    // Display the original unsorted array
    printf("Unsorted Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Bubble Sort Algorithm
    // Outer loop runs (size-1) times to sort the entire array
    for (i = 0; i < size - 1; i++) {
        // Inner loop compares adjacent elements and pushes the largest to the end
        for (j = 0; j < size - i - 1; j++) {
            // Swap if the current element is greater than the next one
            if (array[j] > array[j + 1]) {
                temp = array[j]; // Store current element in temp
                array[j] = array[j + 1]; // Swap elements
                array[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted Array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}
