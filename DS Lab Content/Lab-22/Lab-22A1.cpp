// Lab-22
// Implementing the Binary Search Algorithm in C

#include <stdio.h>

int main() {
    int size;

    // Ask and assign the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Declare a dynamic array with user-defined size

    printf("Enter array elements:\n");

    // Input user-defined array elements
    for (int i = 0; i < size; i++) {
        printf("Enter element #%d => ", i);
        scanf("%d", &array[i]);
    }

    // Ask the user to search for an element
    int value;
    printf("Enter an element to search: ");
    scanf("%d", &value);

    // Sorting the array using Bubble Sort (Binary Search requires a sorted array)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];  // Swap elements
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Initializing Binary Search variables
    int low = 0;           // Start index of the array
    int high = size - 1;   // End index of the array
    int elementFound = -1; // Flag to check if the element is found

    // Binary Search Algorithm
    while (low <= high) {
        int mid = (low + high) / 2; // Calculate the middle index

        // If the middle element matches the searched value
        if (array[mid] == value) {
            elementFound = mid; // Store the index of the found element
            break; // Exit the loop as element is found
        }

        // If the search value is greater, ignore the left half
        if (array[mid] < value) {
            low = mid + 1;
        }
        // If the search value is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Display search result
    if (elementFound != -1) {
        printf("Element %d found at index => %d\n", value, elementFound);
    } else {
        printf("Element not found or incorrect index...\n");
    }

    return 0; // Successful execution
}
