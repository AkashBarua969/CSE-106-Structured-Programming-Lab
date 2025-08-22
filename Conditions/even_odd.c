// Question: Write a C program to check whether a number is even or odd.
//
// Formula:
// Even : n % 2 == 0
// Odd  : n % 2 != 0

#include <stdio.h>   // input-output library

int main() {
    int num;

    // ইউজার থেকে ইনপুট নেয়া
    printf("Enter a number: ");
    scanf("%d", &num);

    // Even বা Odd চেক করা
    if(num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

