// Question: Write a C program to multiply a number by 2 using bitwise shift.

#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Left shift by 1 মানে 2 দিয়ে গুণ করা
    result = num << 1;

    printf("%d multiplied by 2 = %d\n", num, result);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

