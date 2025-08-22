// Question: Write a C program to implement binary search using recursion.

#include <stdio.h>

// Recursive Binary Search function
int binarySearch(int arr[], int low, int high, int key) {
    if(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key)
            return mid;       // found, return index
        else if(arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);  // left half
        else
            return binarySearch(arr, mid + 1, high, key); // right half
    }
    return -1;  // not found
}

int main() {
    int arr[100], n, key, result;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
        printf("%d found at index %d\n", key, result);
    else
        printf("%d not found in the array\n", key);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

