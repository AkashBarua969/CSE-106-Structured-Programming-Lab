// Question: Write a C program to find the length of a string without using library functions.
//
// Formula:
// Initialize length = 0
// For each character in string until '\0':
//   length++

#include <stdio.h>   // input-output library

int main() {
    char str[100];
    int i, length = 0;

    // ইউজার থেকে string ইনপুট নেয়া
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // spaces handle করার জন্য fgets

    // string iterate করা
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {  // fgets \n include করে, তাই ignore করা
            length++;
        }
    }

    printf("Length of the string = %d\n", length);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

