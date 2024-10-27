#include <stdio.h>
//Lab-1
/*WAP to perform Addition, Subtraction, Multiplication and Division of 2 numbers 
as per user’s choice.*/ 
int main() {
    float firstNumber, secondNumber, result;
    char operation;

    // Input two numbers from user
    printf("Enter the first number: ");
    scanf("%f", &firstNumber);
    printf("Enter the second number: ");
    scanf("%f", &secondNumber);

    // Input the operation choice
    printf("Choose the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the chosen operation
    switch (operation) {
        case '+':
            result = firstNumber + secondNumber;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = firstNumber - secondNumber;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = firstNumber * secondNumber;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
            break;
    }
    
    // Perform the chosen operation using if-else statements
    /*if (operation == '+') {
        result = firstNumber + secondNumber;
        printf("Result: %.2f\n", result);
    } else if (operation == '-') {
        result = firstNumber - secondNumber;
        printf("Result: %.2f\n", result);
    } else if (operation == '*') {
        result = firstNumber * secondNumber;
        printf("Result: %.2f\n", result);
    } else if (operation == '/') {
        if (secondNumber != 0) {
            result = firstNumber / secondNumber;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else {
        printf("Invalid operation!\n");
    }*/
    
    return 0;
}

