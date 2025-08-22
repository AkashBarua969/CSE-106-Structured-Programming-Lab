// Question: Write a C program to print Fibonacci series.
//
// Formula:
// First two numbers: 0, 1
// Next numbers: sum of previous two numbers

#include <stdio.h>   // input-output library

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    // ইউজার থেকে n ইনপুট নেয়া
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%llu ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

