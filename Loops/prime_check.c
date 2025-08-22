// Question: Write a C program to check whether a number is prime or not.
//
// Formula:
// A number n is prime if it has no divisors other than 1 and n.

#include <stdio.h>   // input-output library
#include <stdbool.h> // boolean type

int main() {
    int n, i;
    bool isPrime = true;

    // ইউজার থেকে number ইনপুট নেয়া
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 1) {
        isPrime = false; // 1 বা negative number prime নয়
    } else {
        for(i = 2; i*i <= n; i++) { // 2 থেকে √n পর্যন্ত check করা
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is not a Prime Number.\n", n);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

