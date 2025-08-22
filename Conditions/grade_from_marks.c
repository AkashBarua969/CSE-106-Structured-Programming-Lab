// Question: Write a C program to calculate grade from marks.
//
// Formula:
// 80-100 -> A+
// 70-79  -> A
// 60-69  -> A-
// 50-59  -> B
// 40-49  -> C
// 33-39  -> D
// 0-32   -> F

#include <stdio.h>   // input-output library

int main() {
    int marks;

    // ইউজার থেকে marks ইনপুট নেয়া
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    // grade নির্ণয়
    if(marks >= 80 && marks <= 100) {
        printf("Grade: A+\n");
    } else if(marks >= 70 && marks <= 79) {
        printf("Grade: A\n");
    } else if(marks >= 60 && marks <= 69) {
        printf("Grade: A-\n");
    } else if(marks >= 50 && marks <= 59) {
        printf("Grade: B\n");
    } else if(marks >= 40 && marks <= 49) {
        printf("Grade: C\n");
    } else if(marks >= 33 && marks <= 39) {
        printf("Grade: D\n");
    } else if(marks >= 0 && marks <= 32) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

