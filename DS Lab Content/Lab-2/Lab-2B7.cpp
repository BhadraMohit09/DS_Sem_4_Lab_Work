#include <stdio.h>
//Lab-2
//WAP to print odd numbers between 1 to N.
int main() {
    int num = 1, N;

    // Input the value of N from user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Odd numbers from 1 to %d:\n", N);
    while (num <= N) {
        if (num % 2 != 0) {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}

