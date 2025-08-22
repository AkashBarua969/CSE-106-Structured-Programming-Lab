// Question: Write a C program to count the number of 1 bits in an integer.

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num; // মূল number safe রাখতে একটা copy

    while (temp != 0) {
        if (temp & 1) {   // শেষ bit চেক করা হলো
            count++;
        }
        temp = temp >> 1; // এক ধাপ ডান দিকে shift
    }

    printf("Number of 1 bits in %d = %d\n", num, count);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

