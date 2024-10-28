//Lab-3
//WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n. 
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
        sum += i * i; // Add the square of the current number to the sum
        i++; // Increment the number by 1
    } while (i <= n); // Condition to continue the loop

    // Print the sum of the series
    printf("Sum of the series is: %d", sum);

    return 0; // Return 0 to indicate successful execution
}

