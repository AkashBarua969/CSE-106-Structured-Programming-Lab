// Question: Write a C program to add, subtract, multiply, and divide two numbers.

#include <stdio.h>  // input-output library

int main() {
    int num1, num2;   // দুইটা পূর্ণ সংখ্যা রাখার জন্য ভ্যারিয়েবল
    int sum, sub, mul;
    float div;        // ভাগফল ভগ্নাংশ হতে পারে তাই float ব্যবহার

    // ইউজার থেকে সংখ্যা ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // গণনা করা হচ্ছে
    sum = num1 + num2;       // যোগ
    sub = num1 - num2;       // বিয়োগ
    mul = num1 * num2;       // গুণ
    div = (float)num1 / num2; // ভাগ (float এ কনভার্ট করা হয়েছে)

    // ফলাফল দেখানো হচ্ছে
    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %.2f\n", div);  // %.2f মানে দশমিকের পরে ২ ঘর দেখাবে

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

