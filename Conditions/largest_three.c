// Question: Write a C program to find the largest among three numbers.
//
// Formula:
// If a > b and a > c then a is largest
// Else if b > a and b > c then b is largest
// Else c is largest

#include <stdio.h>   // input-output library

int main() {
    int a, b, c;

    // ইউজার থেকে তিনটি সংখ্যা ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // বড় সংখ্যা নির্ণয়
    if(a > b && a > c) {
        printf("%d is the largest number.\n", a);
    } else if(b > a && b > c) {
        printf("%d is the largest number.\n", b);
    } else if(c > a && c > b) {
        printf("%d is the largest number.\n", c);
    } else {
        printf("There is a tie among the numbers.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

