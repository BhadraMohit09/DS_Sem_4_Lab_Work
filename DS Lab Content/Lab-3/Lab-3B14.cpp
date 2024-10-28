//Lab-3
//WAP to print odd numbers between 1 to n.
#include <stdio.h>

int main() {
    // Initialize the starting number
    int i = 1;
    int n;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use do-while loop to print odd numbers from 1 to n
    do {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d ", i); // Print the odd number
        }
        i++; // Increment the number by 1
    } while (i <= n); // Condition to continue the loop

    return 0; // Return 0 to indicate successful execution
}

