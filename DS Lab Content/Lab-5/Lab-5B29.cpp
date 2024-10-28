//Lab-5
//WAP to count numbers higher than average of an array.
#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the number of elements
    printf("Enter the number of elements:: ");
    scanf("%d", &size);

    int arr[size];
    int sum = 0;

    // Read n numbers into the array
    printf("Enter %d number:: ", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum
    }

    // Calculate average
    float average = (float)sum / size;

    // Count numbers higher than average
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    // Print the count of numbers higher than average
    printf("Number of elements greater than average => %d\n", count);

    return 0; // Return 0 to indicate successful execution
}

