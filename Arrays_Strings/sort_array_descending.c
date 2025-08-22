// Question: Write a C program to sort elements of an array in descending order.
//
// Formula (Bubble Sort):
// For each element i:
//   Compare with next elements j
//   If arr[i] < arr[j], swap arr[i] and arr[j]

#include <stdio.h>   // input-output library

int main() {
    int n, i, j, temp;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Bubble sort for descending order
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                // swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Sorted array print করা
    printf("Array elements in descending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

