// Question: Write a C program to demonstrate pointer to pointer.

#include <stdio.h>

int main() {
    int num = 50;       // একটি integer variable
    int *ptr;           // pointer to integer
    int **ptr2;         // pointer to pointer

    ptr = &num;         // ptr num এর address রাখে
    ptr2 = &ptr;        // ptr2 ptr এর address রাখে

    printf("Value of num: %d\n", num);
    printf("Address of num (&num): %p\n", &num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Value pointed by ptr (*ptr): %d\n", *ptr);
    printf("Address of ptr (&ptr): %p\n", &ptr);
    printf("Value stored in ptr2 (address of ptr): %p\n", ptr2);
    printf("Value pointed by ptr2 (*ptr2) (address of num): %p\n", *ptr2);
    printf("Value pointed by value pointed by ptr2 (**ptr2) (num): %d\n", **ptr2);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

