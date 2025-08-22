// Question: Write a C program to use dynamic memory allocation (malloc, calloc, realloc, free).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc ব্যবহার করে memory allocate
    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements entered using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // calloc ব্যবহার করে memory allocate (zero-initialized)
    int *arr2 = (int*) calloc(n, sizeof(int));
    if(arr2 == NULL) {
        printf("Memory allocation failed using calloc.\n");
        free(arr);  // previous memory release
        return 1;
    }

    printf("\nElements in calloc initialized array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);  // সব zero হবে
    }
    printf("\n");

    // realloc দিয়ে memory resize করা
    int newSize;
    printf("\nEnter new size for realloc: ");
    scanf("%d", &newSize);

    arr = (int*) realloc(arr, newSize * sizeof(int));
    if(arr == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr2);
        return 1;
    }

    printf("Enter additional elements:\n");
    for(i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements after realloc:\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // memory release
    free(arr);
    free(arr2);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

