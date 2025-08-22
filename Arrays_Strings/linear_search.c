// Question: Write a C program to search an element in an array (linear search).
//
// Formula:
// For each element in array:
//   If arr[i] == key, element found
//   Else, continue

#include <stdio.h>   // input-output library

int main() {
    int n, i, key, found = 0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // search করার জন্য key ইনপুট নেয়া
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Element %d found at position %d.\n", key, i+1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

