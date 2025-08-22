// Question: Write a C program to find the smallest element in an array.
//
// Formula:
// Initialize smallest = arr[0]
// For each element in array:
//   If arr[i] < smallest, update smallest

#include <stdio.h>   // input-output library

int main() {
    int n, i;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // প্রথম element ধরি smallest
    int smallest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];  // update smallest
        }
    }

    printf("The smallest element in the array is %d\n", smallest);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}
