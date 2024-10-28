//Lab-3
//WAP to print numbers between two given numbers which is divisible by 2 but not divisible by 4. 
#include <stdio.h>

int main() {
    int start, end;

    // Ask the user to enter the start number
    printf("Enter the start number: ");
    scanf("%d", &start); // Read the start number

    // Ask the user to enter the end number
    printf("Enter the end number: ");
    scanf("%d", &end); // Read the end number

    // Use do-while loop to print numbers between start and end
    do {
        if (start % 2 == 0 && start % 4 != 0) { // Check if the number is divisible by 2 but not by 4
            printf("%d ", start); // Print the number
        }
        start++; // Increment the number by 1
    } while (start <= end); // Condition to continue the loop

    return 0; // Return 0 to indicate successful execution
}

