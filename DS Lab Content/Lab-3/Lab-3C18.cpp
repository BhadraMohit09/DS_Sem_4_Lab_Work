//Lab-3
//WAP to print sum of series 1+1/2+1/3+1/4+?+1/n. 
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0; // Initialize sum to 0.0 to store the fractional sum
    int i = 1;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use do-while loop to calculate the sum of the series
    do {
        sum += 1.0 / i; // Add the reciprocal of the current number to the sum
        i++; // Increment the number by 1
    } while (i <= n); // Condition to continue the loop

    // Print the sum of the series
    printf("Sum of the series is: %.2f", sum);

    return 0; // Return 0 to indicate successful execution
}

