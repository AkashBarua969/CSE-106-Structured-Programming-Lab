// Question: Write a C program to add two numbers using pointers.

#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;   // pointer variables

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;   // num1 এর address store করলাম
    ptr2 = &num2;   // num2 এর address store করলাম

    // pointer দিয়ে মান যোগ করা
    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d = %d\n", *ptr1, *ptr2, sum);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

