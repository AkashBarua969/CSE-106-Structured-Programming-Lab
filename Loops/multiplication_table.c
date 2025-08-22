// Question: Write a C program to generate multiplication table of any number.

#include <stdio.h>   // input-output library

int main() {
    int num, i;

    // ইউজার থেকে number ইনপুট নেয়া
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    // loop ব্যবহার করে multiplication table print
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

