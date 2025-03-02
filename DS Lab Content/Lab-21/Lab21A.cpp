// Lab-21
// Implementing Linear Search to find the location of an input element

#include <stdio.h>

int main() {
    int size;

    // Ask user input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Declare an array of user-defined size

    // Let the user enter elements into the array
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element #%d => ", i + 1);
        scanf("%d", &array[i]);
    }

    int elementToSearch;

    // Ask user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &elementToSearch);

    int index = -1; // Variable to store the index of the found element

    // Linear Search Algorithm
    for (int i = 0; i < size; i++) {
        // If the element is found in the array
        if (array[i] == elementToSearch) {
            index = i; // Store the index where the element is found
            break; // Exit the loop as the element is found
        }
    }

    // Display the search result
    if (index != -1) {
        printf("Element %d found at index => %d\n", elementToSearch, index);
    } else {
        printf("Element not found...\n");
    }

    return 0; // Successful execution
}
