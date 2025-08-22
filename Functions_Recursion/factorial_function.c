// Question: Write a C program to find factorial using function.
//
// Formula:
// factorial(n):
//   result = 1
//   for i = 1 to n:
//       result *= i
//   return result

#include <stdio.h>

// Function declaration
int factorial(int n) {
    int i, result = 1;
    for(i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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

