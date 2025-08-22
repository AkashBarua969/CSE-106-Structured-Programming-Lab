// Question: Write a C program to find the area and circumference of a circle.
//
// Formula:
// Area = π × r × r
// Circumference = 2 × π × r

#include <stdio.h>   // input-output library
#define PI 3.1416    // π এর মান (constant)

int main() {
    float r, area, circumference;  // r = radius, area, circumference

    // ইউজার থেকে radius ইনপুট নেয়া
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // সূত্র অনুযায়ী হিসাব
    area = PI * r * r;                  // Area = π × r²
    circumference = 2 * PI * r;         // Circumference = 2 × π × r

    // ফলাফল দেখানো
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

