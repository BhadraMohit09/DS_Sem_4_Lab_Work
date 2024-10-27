#include <stdio.h>
//Lab-2
/*WAP to print numbers between two given numbers which is divisible by 2 but 
not divisible by 4. */
int main() {
    int start, end;

    // Input the start and end values from user
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Numbers between %d and %d divisible by 2 but not by 4:\n", start, end);
    while (start <= end) {
        if (start % 2 == 0 && start % 4 != 0) {
            printf("%d\n", start);
        }
        start++;
    }
    return 0;
}

