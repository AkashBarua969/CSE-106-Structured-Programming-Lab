// Question: Write a C program to demonstrate pointer and address of a variable.

#include <stdio.h>

int main() {
    int num = 10;        // একটি সাধারণ integer ভেরিয়েবল
    int *ptr;            // pointer variable (integer এর ঠিকানা ধরে রাখবে)

    ptr = &num;          // num এর ঠিকানা pointer এ store করা হলো

    // ভেরিয়েবল এবং pointer এর কাজ দেখানো হচ্ছে
    printf("Value of num = %d\n", num);          // সরাসরি num এর মান
    printf("Address of num = %p\n", &num);       // num এর ঠিকানা

    printf("Value of ptr (address stored) = %p\n", ptr);  // pointer এ stored address
    printf("Value pointed by ptr = %d\n", *ptr);          // pointer দিয়ে মান access করা

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}
