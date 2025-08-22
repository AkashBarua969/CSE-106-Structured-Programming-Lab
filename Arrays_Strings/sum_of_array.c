// Question: Write a C program to calculate the sum of all elements of an array.
//
// Formula:
// Initialize sum = 0
// For each element in array:
//   sum += arr[i]

#include <stdio.h>   // input-output library

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // সব element যোগ করা
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements in the array = %d\n", sum);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

