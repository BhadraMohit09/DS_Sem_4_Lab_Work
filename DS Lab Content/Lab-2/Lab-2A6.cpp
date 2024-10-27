#include <stdio.h>
//Lab-2
//WAP to print 1 to N numbers.
int main() {
    int num = 1, limit;

    // Input the value of N from user
    printf("Enter the limit:: ");
    scanf("%d", &limit);

    printf("Numbers from 1 to %d::\n", N);
    while (num <= limit) {
        printf("%d\n", num);
        num++;
    }
    return 0;
}

