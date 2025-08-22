// Question: Write a C program to generate Fibonacci series using recursion.
//
// Formula:
// fibonacci(n):
//   if n == 0 -> return 0
//   if n == 1 -> return 1
//   else -> return fibonacci(n-1) + fibonacci(n-2)

#include <stdio.h>

// Function to return nth Fibonacci number recursively
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci series: ");
        for(i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

