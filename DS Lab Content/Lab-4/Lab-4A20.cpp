//Lab-4
//WAP to print 1 to n numbers.
#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read the value of n

    // Use for loop to print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i); // Print the current number
    }

    return 0; // Return 0 to indicate successful execution
}

