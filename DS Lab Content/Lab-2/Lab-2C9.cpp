#include <stdio.h>
//Lab-2
//WAP to print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
int main() {
    int Size, i = 1;
    int sum = 0;

    // Input the value of N from user
    printf("Enter the size:: ");
    scanf("%d", &size);

    printf("Sum of series 1 + 4 + 9 + ... + %d^2:\n", size);
    while (i <= size) {
        sum += i * i;
        i++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}

