// Question: Write a C program to find the factorial of a number.
//
// Formula:
// n! = n × (n-1) × (n-2) × ... × 1

#include <stdio.h>   // input-output library

int main() {
    int n, i;
    unsigned long long fact = 1;  // factorial বড় সংখ্যা হতে পারে, তাই unsigned long long

    // ইউজার থেকে ইনপুট নেয়া
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 বা negative চেক করা
    if(n < 0) {
        printf("Factorial of negative number is not defined.\n");
    } else {
        // loop ব্যবহার করে factorial বের করা
        for(i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

