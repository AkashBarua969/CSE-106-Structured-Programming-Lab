// Question: Write a C program to swap two numbers using function.
//
// Formula:
// swap(a, b):
//   temp = *a
//   *a = *b
//   *b = temp

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

