//Lab-6
//Create structure for Students and display the data.
#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[100];
    int rollNumber;
    float marks;
};

int main() {
    int n;

    // Ask the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures to store student data
    struct Student students[n];

    // Read data of n students
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);

        // Read student name
        printf("Name: ");
        getchar(); // To consume the newline character left by previous scanf
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Read roll number
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        // Read marks
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display data of n students
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0; // Return 0 to indicate successful execution
}

