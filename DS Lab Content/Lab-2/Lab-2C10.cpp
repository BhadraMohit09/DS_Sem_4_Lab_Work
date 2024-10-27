#include <stdio.h>
//Lab-2
//WAP to print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
int main() {
    int size, i = 1;
    int sum = 0;

    // Input the value of N from user
    printf("Enter the size:: ");
    scanf("%d", &size);

    printf("Sum of series 1 - 2 + 3 - 4 + ... + %d:\n", size);
    while (i <= size) {
        if (i % 2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
        i++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}

