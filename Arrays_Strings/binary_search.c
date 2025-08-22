// Question: Write a C program to search an element in an array (binary search).
//
// Formula:
// Initialize low = 0, high = n-1
// while low <= high:
//   mid = (low + high)/2
//   if arr[mid] == key -> found
//   else if arr[mid] < key -> low = mid + 1
//   else -> high = mid - 1

#include <stdio.h>   // input-output library

int main() {
    int n, i, key;
    int found = 0;

    printf("Enter the number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // ইউজার থেকে array elements ইনপুট নেয়া
    printf("Enter elements in ascending order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // search করার জন্য key ইনপুট নেয়া
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;

    // binary search
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found) {
        printf("Element %d found at position %d.\n", key, mid + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

