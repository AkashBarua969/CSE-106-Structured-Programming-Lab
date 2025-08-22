// Question: Write a C program to find length of a string using pointer.

#include <stdio.h>

int main() {
    char str[100];    // string input এর জন্য জায়গা
    char *ptr;        // pointer variable
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // string input নেওয়া হলো

    ptr = str;   // pointer কে string এর শুরুতে বসালাম

    // pointer দিয়ে string traverse
    while(*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;   // পরের character এ move করব
    }

    printf("Length of the string = %d\n", length);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

