//Lab-4
//WAP to print sum of series 1+1/2+1/3+1/4+?+1/n. 
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0; // Initialize sum to 0.0 to store the fractional sum

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use for loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Add the reciprocal of the current number to the sum
    }

    // Print the sum of the series
    printf("Sum of the series is: %.2f", sum);

    return 0; // Return 0 to indicate successful execution
}

