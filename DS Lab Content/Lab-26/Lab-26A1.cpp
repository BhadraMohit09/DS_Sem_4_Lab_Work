// Lab-26
// Sorting an array using the Merge Sort Algorithm

#include <stdio.h>

// Function to merge two subarrays of arr[]
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid; // Size of right subarray

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]; // Copy the smaller element
            i++;
        } else {
            arr[k] = R[j]; // Copy the smaller element
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Find the middle index

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Main function to test Merge Sort
int main() {
    int array[] = {75, 2, 34, 19, 73, 64, 85, 26, 15, 10, 28};
    int n = sizeof(array) / sizeof(array[0]); // Calculate array size

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    // Call mergeSort to sort the array
    mergeSort(array, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0; // Return 0 to indicate successful execution
}
