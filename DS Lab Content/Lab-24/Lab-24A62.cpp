#include <stdio.h> // Include standard input-output library

int main() {
    int size; // Variable to store the size of the array

    // Ask the user to enter the number of elements
    printf("Enter the size for array elements: ");
    scanf("%d", &size);

    int array[size]; // Declare an array of the given size (VLA - Variable Length Array)

    // Prompt the user to enter array elements
    printf("Enter array elements: \n");
    for (int i = 0; i < size; i++) {
        printf("Enter #%d => ", i); // Display index for better user experience
        scanf("%d", &array[i]); // Read each element into the array
    }

    // Display the unsorted array
    printf("Unsorted Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int min_index; // Variable to store the index of the smallest element

    // Selection Sort Algorithm
    for (int i = 0; i < size - 1; i++) {
        min_index = i; // Assume the current index has the minimum value

        // Find the index of the smallest element in the remaining array
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j; // Update min_index if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }

    // Display the sorted array
    printf("Sorted Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}
