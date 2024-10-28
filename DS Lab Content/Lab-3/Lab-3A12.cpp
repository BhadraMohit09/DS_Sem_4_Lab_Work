//Lab-3
//WAP to print 1 to 10 numbers.
#include <stdio.h>

int main() {
    // Initialize the starting number
    int i = 1;

    // Use do-while loop to print numbers from 1 to 10
    do {
        printf("%d ", i); // Print the current number
        i++; // Increment the number by 1
    } while (i <= 10); // Condition to continue the loop

    return 0; // Return 0 to indicate successful execution
}

