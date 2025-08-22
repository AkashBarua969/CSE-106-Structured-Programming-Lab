// Question: Write a C program to check whether a number is positive, negative, or zero.
//
// Formula:
// Positive : n > 0
// Negative : n < 0
// Zero     : n == 0

#include <stdio.h>   // input-output library

int main() {
    int num;

    // ইউজার থেকে ইনপুট নেয়া
    printf("Enter a number: ");
    scanf("%d", &num);

    // Positive, Negative বা Zero চেক করা
    if(num > 0) {
        printf("%d is Positive.\n", num);
    } else if(num < 0) {
        printf("%d is Negative.\n", num);
    } else {
        printf("The number is Zero.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

