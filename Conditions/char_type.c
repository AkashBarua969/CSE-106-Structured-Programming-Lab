// Question: Write a C program to check whether a character is uppercase, lowercase, digit, or special symbol.
//
// Formula:
// Uppercase: 'A' to 'Z'
// Lowercase: 'a' to 'z'
// Digit: '0' to '9'
// Special symbol: other characters

#include <stdio.h>   // input-output library

int main() {
    char ch;

    // ইউজার থেকে character ইনপুট নেয়া
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Character type চেক করা
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase letter.\n", ch);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase letter.\n", ch);
    } else if(ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    } else {
        printf("%c is a Special symbol.\n", ch);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

