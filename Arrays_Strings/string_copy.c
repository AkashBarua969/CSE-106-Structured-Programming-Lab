// Question: Write a C program to copy one string to another without using library functions.
//
// Formula:
// For each character in source string until '\0':
//   destination[i] = source[i]
// After loop, add '\0' at end of destination

#include <stdio.h>   // input-output library

int main() {
    char source[100], destination[100];
    int i;

    // ইউজার থেকে source string ইনপুট নেয়া
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);  // spaces handle করার জন্য fgets

    // string copy
    for(i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';  // end of string

    printf("Copied string: %s", destination);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

