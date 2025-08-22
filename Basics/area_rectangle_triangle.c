// Question: Write a C program to find the area of a rectangle and triangle.
//
// Formula:
// Rectangle Area = length × width
// Triangle Area  = (base × height) / 2

#include <stdio.h>   // input-output library

int main() {
    float length, width, rect_area;   // rectangle এর জন্য
    float base, height, tri_area;     // triangle এর জন্য

    // Rectangle এর ইনপুট
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Rectangle এর area হিসাব
    rect_area = length * width;

    // Triangle এর ইনপুট
    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    // Triangle এর area হিসাব
    tri_area = (base * height) / 2;

    // ফলাফল দেখানো
    printf("Area of Rectangle = %.2f\n", rect_area);
    printf("Area of Triangle  = %.2f\n", tri_area);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

