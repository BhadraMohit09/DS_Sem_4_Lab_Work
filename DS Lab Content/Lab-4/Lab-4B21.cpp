//Lab-4
//WAP to print odd numbers between 1 to n. 
#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use for loop to print odd numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d ", i); // Print the odd number
        }
    }

    return 0; // Return 0 to indicate successful execution
}

