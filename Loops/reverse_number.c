// Question: Write a C program to reverse a number.
//
// Formula:
// Initialize reverse = 0
// While number != 0:
//   digit = number % 10
//   reverse = reverse * 10 + digit
//   number = number / 10

#include <stdio.h>   // input-output library

int main() {
    int num, originalNum, reverse = 0, digit;

    // ইউজার থেকে number ইনপুট নেয়া
    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        digit = num % 10;         // last digit বের করা
        reverse = reverse * 10 + digit;  // reverse update
        num = num / 10;           // last digit বাদ দেয়া
    }

    printf("Reverse of %d is %d\n", originalNum, reverse);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

