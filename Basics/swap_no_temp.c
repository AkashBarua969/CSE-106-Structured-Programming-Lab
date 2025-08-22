// Question: Write a C program to swap two numbers without using a temporary variable.

#include <stdio.h>  // input-output library

int main() {
    int a, b;  // দুইটা ভ্যারিয়েবল: a এবং b

    // ইউজার থেকে ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // swapping শুরু (যোগ-বিয়োগ method)
    a = a + b;  // এখন a তে আছে (a+b)
    b = a - b;  // (a+b) - b = a  → তাই b এখন আগের a
    a = a - b;  // (a+b) - a = b  → তাই a এখন আগের b

    // ফলাফল দেখানো হচ্ছে
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

