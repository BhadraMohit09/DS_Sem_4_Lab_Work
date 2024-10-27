#include <stdio.h>
//Lab-2
//WAP to print sum of series 1+1/2+1/3+1/4+?+1/n.
int main() {
    int size, i = 1;
    double sum = 0.0;

    // Input the value of N from user
    printf("Enter the value for N: ");
    scanf("%d", &N);

    printf("Sum of series 1 + 1/2 + 1/3 + ... + 1/%d:\n", N);
    while (i <= N) {
        sum += 1.0 / i;
        i++;
    }

    printf("Sum: %.2f\n", sum);
    return 0;
}

