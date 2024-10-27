#include <stdio.h>
//Lab-1
//WAP to find out largest number from given three numbers. 
int main() {
    int firstNumber, secondNumber, thirdNumber, largestNumber;

    // Input three numbers from user
    printf("Enter the first number:: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number:: ");
    scanf("%d", &secondNumber);
    printf("Enter the third number:: ");
    scanf("%d", &thirdNumber);

    // Determine the largest number
    largestNumber = firstNumber; // Assume firstNum is the largest initially
    if (secondNumber > largestNumber) {
        largestNum = secondNum;
    }
    if (thirdNumber > largestNumber) {
        largestNumber = thirdNumber;
    }

    // Output the largest number
    printf("The largest number is:: %d\n", largestNumber);
    return 0;
}

