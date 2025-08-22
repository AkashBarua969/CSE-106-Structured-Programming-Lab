// Question: Write a C program to reverse an array.
//
// Formula:
// Initialize left = 0, right = n-1
// While left < right:
//   Swap arr[left] and arr[right]
//   Increment left, decrement right

#include <stdio.h>   // input-output library

int main() {
    int n, i, temp;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // array reverse করা
    int left = 0, right = n - 1;
    while(left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    // reversed array print করা
    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

