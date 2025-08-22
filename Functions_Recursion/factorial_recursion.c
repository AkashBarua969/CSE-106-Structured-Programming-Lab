// Question: Write a C program to find factorial using recursion.
//
// Formula:
// factorial(n):
//   if n == 0 -> return 1
//   else -> return n * factorial(n-1)

#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if(n == 0)
        return 1;  // base case
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

