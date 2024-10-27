//Lab-1
//WAP to find out largest number from given two numbers. 
#include <stdio.h>

int main() {
    int firstNumber, secondNumber, largestNumber;

    // Input two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Determine the largest number
    if (firstNumber > secondNumber) {
        largest = firstNumber;
    } else {
        largest = secondNumber;
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);
    return 0;
}
