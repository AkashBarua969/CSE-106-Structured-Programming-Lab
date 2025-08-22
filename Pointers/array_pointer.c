// Question: Write a C program to access array elements using pointer.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // array এর প্রথম element এর ঠিকানা pointer এ বসালাম

    printf("\nArray elements using pointer:\n");
    for(i = 0; i < n; i++) {
        printf("Element %d = %d\n", i+1, *(ptr + i));
        // *(ptr + i) মানে arr[i]
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

