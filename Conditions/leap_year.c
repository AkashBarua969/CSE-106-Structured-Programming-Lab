// Question: Write a C program to check whether a year is a leap year or not.
//
// Formula:
// A year is leap if (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)

#include <stdio.h>   // input-output library

int main() {
    int year;

    // ইউজার থেকে year ইনপুট নেয়া
    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year চেক করা
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

