// Question: Write a C program to check prime number using function.
//
// Formula:
// isPrime(n):
//   If n <= 1 -> return 0 (not prime)
//   For i = 2 to sqrt(n):
//       If n % i == 0 -> return 0
//   Return 1 (prime)

#include <stdio.h>
#include <math.h>   // for sqrt()

// Function to check prime
int isPrime(int n) {
    if(n <= 1) {
        return 0;  // not prime
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;  // not prime
        }
    }
    return 1;  // prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

