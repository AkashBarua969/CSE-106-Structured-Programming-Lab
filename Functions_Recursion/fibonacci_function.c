// Question: Write a C program to generate Fibonacci series using function.
//
// Formula:
// fibonacci(n):
//   first = 0, second = 1
//   for i = 0 to n-1:
//       print first
//       next = first + second
//       first = second
//       second = next

#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(n);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}
