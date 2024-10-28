//Lab-3
//WAP to print 1 to n numbers.
#include <stdio.h>

int main() {
    // Initialize the starting number
    int i = 1;
    int n;

    // Ask the user to enter the value of n
    printf("Enter the value of n:: ");
    scanf("%d", &n); // Read the value of n

    // Use do-while loop to print numbers from 1 to n
    do {
        printf("%d ", i); // Print the current number
        i++; // Increment the number by 1
    } while (i <= n); // Condition to continue the loop
	printf("Program executed...");
    return 0; // Return 0 to indicate successful execution
}

