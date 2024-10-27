#include <stdio.h>
//Lab-2
//WAP to print 1 to 10 numbers.
int main() {
    int num = 1;

    printf("Numbers from 1 to 10:\n");
    
    //Initialize while loop for numbers upto 10.
    while (num <= 10) {
        printf("%d\n", num);
        num++;
    }
    return 0;
}

