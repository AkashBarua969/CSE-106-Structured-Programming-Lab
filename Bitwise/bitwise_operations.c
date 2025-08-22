// Question: Write a C program to perform bitwise AND, OR, XOR, and NOT.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Bitwise Operations ---\n");
    printf("a & b = %d\n", a & b);   // Bitwise AND
    printf("a | b = %d\n", a | b);   // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);   // Bitwise XOR
    printf("~a = %d\n", ~a);         // Bitwise NOT (on a)
    printf("~b = %d\n", ~b);         // Bitwise NOT (on b)

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

