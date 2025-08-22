// Question: Write a C program to swap two numbers using bitwise XOR.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // XOR দিয়ে swap করা হচ্ছে
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

