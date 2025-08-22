// Question: Write a C program to return pointer from a function.

#include <stdio.h>

// Function definition
int* getSquare(int num) {
    static int result;   // static variable (memory function শেষ হলেও থাকে)
    result = num * num;
    return &result;      // result এর address return করা হলো
}

int main() {
    int n;
    int *sq;  // pointer variable

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = getSquare(n);   // function থেকে pointer return হলো

    printf("Square of %d = %d\n", n, *sq);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

