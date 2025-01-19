# Pointers in C

This document provides various examples and explanations of pointers in the C programming language.

## What is a Pointer?
A pointer is a variable that stores the memory address of another variable.

### Syntax
```c
type *pointer_name;
```

### Key Operations:
1. **Address-of Operator (`&`)**: Retrieves the memory address of a variable.
2. **Dereference Operator (`*`)**: Accesses or modifies the value at the memory address.

---

## Example Programs

### 1. Pointer to an Array
```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
```

---

### 2. Pointer to a Function
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*func_ptr)(); // Function pointer
    func_ptr = &greet;

    (*func_ptr)(); // Call the function using the pointer

    return 0;
}
```

---

### 3. Pointer to a Structure
```c
#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;

    printf("Point coordinates: x = %d, y = %d\n", ptr->x, ptr->y);

    // Modify values through the pointer
    ptr->x = 50;
    ptr->y = 100;

    printf("Updated coordinates: x = %d, y = %d\n", ptr->x, ptr->y);

    return 0;
}
```

---

### 4. Dynamic Memory Allocation with Pointers
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int)); // Allocate memory

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Free allocated memory

    return 0;
}
```

---

### 5. Pointer to Pointer
```c
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num: %d\n", num);
    printf("Value of num using ptr: %d\n", *ptr);
    printf("Value of num using ptr2: %d\n", **ptr2);

    return 0;
}
```

---

### 6. Swap Two Numbers Using Pointers
```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
```

---

### 7. String Manipulation with Pointers
```c
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
```

---

### 8. Accessing Multi-dimensional Array with Pointers
```c
#include <stdio.h>

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int *ptr = &matrix[0][0];

    printf("Matrix elements using pointer:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(ptr + i * 2 + j));
        }
        printf("\n");
    }

    return 0;
}
```

---

### 9. Linked List Implementation Using Pointers
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}
