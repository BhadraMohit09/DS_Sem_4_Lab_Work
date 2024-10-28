//Lab-5
//WAP to read n numbers in an array and print them.
#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the number of elements
    printf("Enter the number of elements:: ");
    scanf("%d", &size);

    int arr[size];

    // Read n numbers into the array
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the numbers in the array
    printf("The numbers in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0; // Return 0 to indicate successful execution
}

