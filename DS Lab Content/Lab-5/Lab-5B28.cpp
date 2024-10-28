//Lab-5
//WAP to find Maximum, Minimum, Sum, and Average of given numbers in an array. 
#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the number of elements
    printf("Enter the number of elements:: ");
    scanf("%d", &size);

    int arr[n];
    int sum = 0;
    int maximumNumber, minimumNumber;

    // Read size for the array
    printf("Enter %d numbers: ", size);
    
	for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize maximum and minimum numbers with the first element of the array
    maximumNumber = minNumber = arr[0];

    // Calculate sum, and find maximum and minimum
    for (int i = 0; i < size; i++) {
    	
        sum += arr[i]; // Calculate sum
        
		if (arr[i] > maximumNumber) {
        
		    maximumNumber = arr[i]; // Find maximum
        
		}
        
		if (arr[i] < minimumNumber) {
        
		    minimumNumber = arr[i]; // Find minimum
        
		}
    
	}

    // Calculate average
    float average = (float)sum / size;

    // Print the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0; // Return 0 to indicate successful execution
}

