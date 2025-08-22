// Question: Write a C program to swap two numbers using a temporary variable.

#include <stdio.h>  // input-output library

int main() {
    int a, b, temp;  // তিনটা ভ্যারিয়েবল: a, b এবং temp (temporary)

    // ইউজার থেকে দুইটা সংখ্যা ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // swapping শুরু
    temp = a;   // a এর মান temp এ রাখা হলো
    a = b;      // b এর মান a তে দেয়া হলো
    b = temp;   // temp এ রাখা আগের a এর মান b তে দেয়া হলো

    // ফলাফল দেখানো হচ্ছে
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

