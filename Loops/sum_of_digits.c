// Question: Write a C program to find the sum of digits of a number.
//
// Formula:
// Initialize sum = 0
// While number != 0:
//   digit = number % 10
//   sum = sum + digit
//   number = number / 10

#include <stdio.h>   // input-output library

int main() {
    int num, originalNum, sum = 0, digit;

    // ইউজার থেকে number ইনপুট নেয়া
    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        digit = num % 10;  // last digit বের করা
        sum += digit;      // যোগফল update
        num = num / 10;    // last digit বাদ দেয়া
    }

    printf("Sum of digits of %d = %d\n", originalNum, sum);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

