// Question: Write a C program to find the largest among two numbers.
//
// Formula:
// If a > b then a is largest
// Else b is largest

#include <stdio.h>   // input-output library

int main() {
    int a, b;

    // ইউজার থেকে দুইটি সংখ্যা ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // বড় সংখ্যা নির্ণয়
    if(a > b) {
        printf("%d is the largest number.\n", a);
    } else if(b > a) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

