#include <stdio.h>
//Lab-1
/*WAP to read marks of five subjects. Calculate percentage and print class 
accordingly. Fail if percentage is below 35, Pass Class if percentage between 35 
to 45, Second Class if percentage is between 45 to 60, First Class if percentage is 
between 60 to 70, and Distinctions if percentage more than 70.*/ 
int main() {
    float marks[5], totalMarks = 0, percentage;
    int i;

    // Input marks for five subjects
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate percentage
    percentage = (totalMarks / 500) * 100; // Assuming each subject is out of 100

    // Determine class based on percentage
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage < 35) {
        printf("Result: Fail\n");
    } else if (percentage < 45) {
        printf("Result: Pass Class\n");
    } else if (percentage < 60) {
        printf("Result: Second Class\n");
    } else if (percentage < 70) {
        printf("Result: First Class\n");
    } else {
        printf("Result: Distinction\n");
    }
    return 0;
}

