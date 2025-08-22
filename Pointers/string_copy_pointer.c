// Question: Write a C program to copy a string using pointer.

#include <stdio.h>

int main() {
    char source[100], destination[100];
    char *srcPtr, *destPtr;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    srcPtr = source;        // source string এর শুরুতে pointer বসালাম
    destPtr = destination;  // destination string এর শুরুতে pointer বসালাম

    // pointer দিয়ে copy করা
    while(*srcPtr != '\0') {
        if(*srcPtr == '\n') {   // fgets এ new line আসলে skip করা হবে
            srcPtr++;
            continue;
        }
        *destPtr = *srcPtr;  // copy character
        srcPtr++;
        destPtr++;
    }
    *destPtr = '\0';  // destination string শেষ করা হলো

    printf("Copied string: %s\n", destination);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

