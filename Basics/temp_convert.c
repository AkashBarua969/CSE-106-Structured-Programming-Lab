// Question: Write a C program to convert Celsius to Fahrenheit and vice versa.
//
// Formula:
// Fahrenheit = (Celsius × 9/5) + 32
// Celsius    = (Fahrenheit − 32) × 5/9

#include <stdio.h>   // input-output library

int main() {
    float celsius, fahrenheit;

    // Celsius থেকে Fahrenheit এ রূপান্তর
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    // Fahrenheit থেকে Celsius এ রূপান্তর
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

