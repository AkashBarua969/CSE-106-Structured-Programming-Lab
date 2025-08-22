// Question: Write a C program to demonstrate function pointer.

#include <stdio.h>

// কিছু basic functions
void greet() {
    printf("Hello! Welcome to C programming.\n");
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Function pointer declarations
    void (*fptr1)();            // pointer to function with void return and no parameters
    int (*fptr2)(int, int);     // pointer to function with int return and two int parameters

    // Assign function addresses
    fptr1 = greet;
    fptr2 = add;

    // Call functions using pointers
    fptr1();  // greet() function call via pointer

    int x = 10, y = 20;
    int sum = fptr2(x, y);  // add() function call via pointer
    printf("Sum of %d and %d = %d\n", x, y, sum);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

