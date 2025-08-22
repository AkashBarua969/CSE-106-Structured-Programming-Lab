// Question: Write a C program to find the sum of first N natural numbers.
//
// Formula:
// Sum = N * (N + 1) / 2

#include <stdio.h>   // input-output library

int main() {
    int N, sum;

    // ইউজার থেকে N ইনপুট নেয়া
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // যোগফল বের করা
    sum = N * (N + 1) / 2;

    // ফলাফল দেখানো
    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

