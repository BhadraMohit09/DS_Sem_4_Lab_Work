//Lab-4
//WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
#include <stdio.h>

int main() {
    int n;
    int sum = 0; // Initialize sum to 0

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use for loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += i * i; // Add the square of the current number to the sum
    }

    // Print the sum of the series
    printf("Sum of the series is: %d", sum);

    return 0; // Return 0 to indicate successful execution
}

