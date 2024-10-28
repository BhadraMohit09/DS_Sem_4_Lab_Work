//Lab-3
//WAP to print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include <stdio.h>

int main() {
    int n;
    int sum = 0; // Initialize sum to 0
    int i = 1;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use do-while loop to calculate the sum of the series
    do {
        if (i % 2 == 0) { // Check if the current number is even
            sum -= i; // Subtract the even number from the sum
        } else {
            sum += i; // Add the odd number to the sum
        }
        i++; // Increment the number by 1
    } while (i <= n); // Condition to continue the loop

    // Print the sum of the series
    printf("Sum of the series is: %d", sum);

    return 0; // Return 0 to indicate successful execution
}

