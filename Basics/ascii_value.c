// Question: Write a C program to find the ASCII value of a character.

#include <stdio.h>  // input-output library

int main() {
    char ch;   // একটি character রাখার জন্য ভ্যারিয়েবল
    int ascii; // character এর ASCII value রাখার জন্য ভ্যারিয়েবল

    // ইউজার থেকে একটি character ইনপুট নেয়া
    printf("Enter a character: ");
    scanf("%c", &ch);

    // ASCII মান বের করা হচ্ছে
    ascii = (int)ch;  // character কে integer এ কনভার্ট করলে ASCII মান পাওয়া যায়

    // ফলাফল দেখানো হচ্ছে
    printf("The ASCII value of %c is %d\n", ch, ascii);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

