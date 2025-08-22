// Question: Write a C program to check whether a number is palindrome or not.
//
// Formula:
// Reverse the number
// If reverse == original number -> Palindrome
// Else -> Not palindrome

#include <stdio.h>   // input-output library

int main() {
    int num, originalNum, reverse = 0, digit;

    // ইউজার থেকে number ইনপুট নেয়া
    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        digit = num % 10;             // last digit বের করা
        reverse = reverse * 10 + digit; // reverse update
        num = num / 10;               // last digit বাদ দেয়া
    }

    if(reverse == originalNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

